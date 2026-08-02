# Battle System Reference

A guide to how the battle engine works in this repo (pokeemerald-expansion 1.13.1, a Pokémon Emerald GBA decompilation). Written as a starting point for future work on the battle system.

## Big picture

Battles run as a **data-driven state machine**. There are three layers:

1. **Global battle state** — live per-battler data (`gBattleMons`), per-battle scratch data (`gBattleStruct`), and scripting state (`gBattleScripting`).
2. **A C state machine** in `src/battle_main.c` that drives the turn loop: choose actions → order them → resolve each action → end the turn → repeat.
3. **Battle scripts** — every move's behavior is written as a tiny bytecode script (`attackcanceler`, `damagecalc`, `hitanimation`, ...). Each byte is an index into a table of C functions (`gBattleScriptingCommandsTable`), so game logic is authored as scripts but executed by C handlers.

```
          overworld (map script: trainerbattle / wildbattle)
                                |
                                v
                     BattleSetup_Start*Battle        (src/battle_setup.c)
                                |
                                v
                         CB2_InitBattle              (src/battle_main.c)
                                |
                                v
                    BattleMainCB2 (main loop)
        +-----------------------+-----------------------+
        v                       v                       v
  HandleTurnActionSelection  SetActionsAndBattlers   BattleTurnPassed
  (each side picks an        TurnOrder (speed/prio)   (end-of-turn effects,
   action: Fight/Bag/etc.)   -> RunTurnActions         weather, status dmg)
        |                       |
        +-----------------------+  (repeat until gBattleOutcome != 0)
                                |
                                v
                      HandleEndTurn_BattleWon/Lost/Ran/...
```

## The turn loop in detail

1. **Choose actions** — `HandleTurnActionSelectionState` (src/battle_main.c:4259). Each side's controller picks an action; the choices land in `gChosenActionByBattler[]`.
2. **Order actions** — `SetActionsAndBattlersTurnOrder` (src/battle_main.c:5072). Builds `gActionsByTurnOrder[]` / `gBattlerByTurnOrder[]` using move priority, speed, and items like Quick Claw. Running is forced first.
3. **Resolve each action** — `RunTurnActionsFunctions` (src/battle_main.c:5433) dispatches through `sTurnActionsFuncsTable` (src/battle_main.c:395):
   - `B_ACTION_USE_MOVE` → `HandleAction_UseMove` (src/battle_util.c:387)
   - `B_ACTION_USE_ITEM` → `HandleAction_UseItem`
   - `B_ACTION_SWITCH` → `HandleAction_Switch`
   - `B_ACTION_RUN` → `HandleAction_Run`
   - `B_ACTION_EXEC_SCRIPT` → `HandleAction_RunBattleScript`
4. **Execute the move's battle script** — see "The canonical move script" below.
5. **End the turn** — `BattleTurnPassed` (src/battle_main.c:4054). Cleans up turn values, runs end-of-turn effects (status damage, weather, Leech Seed, etc. — in src/battle_end_turn.c), handles fainted Pokémon, and returns to action selection.

Action IDs (`B_ACTION_*`) and battle outcome IDs (`B_OUTCOME_*`) are defined in include/battle.h (B_ACTION_USE_MOVE is at include/battle.h:52).

## File-by-file roles

| File(s) | What they do |
|---|---|
| `src/battle_main.c` | The heart. `CB2_InitBattle` (line 448) sets up the screen; the `gBattleMainFunc` state machine cycles through action selection → turn order → action execution → turn end. Also owns battle intro/outro and the end-of-battle handlers (`HandleEndTurn_BattleWon/Lost`, etc.). |
| `src/battle_setup.c` | Entry points from the overworld: `BattleSetup_StartWildBattle` (line 308), double wild, trainer, Safari, Pike battles, battle transitions, and the end-of-battle callbacks (`CB2_EndWildBattle`, `CB2_EndTrainerBattle`). |
| `src/battle_util.c` | The largest logic file (~12k lines). `HandleAction_UseMove` (line 387) and the other `HandleAction_*` functions, the ordered pre-move checks (`AtkCanceller_MoveSuccessOrder`, line 2620), weather, ability logic (`AbilityBattleEffects`, line 3305), and the damage formula (`CalculateMoveDamage`, line 9561; `CalculateBaseDamage`, line 9034). |
| `src/battle_script_commands.c` | The interpreter. `gBattleScriptingCommandsTable` (line 598) maps each battle-script byte to a `Cmd_*` function: `Cmd_attackcanceler` (1090), `Cmd_damagecalc` (1799), `Cmd_setadditionaleffects` (4091), `Cmd_getexp` (4493), `Cmd_moveend` (5895), etc. ~18k lines — most "how does this mechanic work" answers live here. |
| `data/battle_scripts_1.s` | The battle scripts themselves: per-effect move behavior (`BattleScript_EffectHit`, line 2685), action-selection scripts, faint/switch scripts, ability popups. |
| `data/battle_scripts_2.s` | Post-battle scripts: EXP payout, level-up, evolution flow. |
| `src/data/battle_move_effects.h` | `gBattleMoveEffects[]` — maps each move `effect` to its battle script (`.battleScript`), TV score, and flags. |
| `src/data/moves_info.h` | `gMovesInfo[]` (line 122) — static per-move data: name, effect, type, category, power, accuracy, PP, priority, flags (contact, sound, punching, etc.). |
| `include/move.h` | Move accessors; `GetMoveBattleScript()` (line 606) resolves a move to its script via its effect. |
| `include/battle.h` + `include/pokemon.h` | Global state declarations: `gBattleMons` (struct `BattlePokemon`, include/pokemon.h:353 — HP/stats/types/status/volatiles), `gBattleStruct` (struct `BattleStruct`, include/battle.h:607 — per-battle scratch), `gBattleScripting`, `gDisableStructs`, `gProtectStructs`, `gSideTimers`, `gFieldStatuses`, `gCurrentMove`, `gBattlerAttacker`, `gBattlerTarget`, `gBattlescriptCurrInstr`. |
| `src/battle_util2.c` | Resource allocation/lifecycle: `AllocateBattleResources` / `FreeBattleResources` (heap allocation of `gBattleStruct`, AI data, link buffers, etc.). |
| `src/battle_end_turn.c` | End-of-turn effects. (Quirk: the main function here is named `n`.) |
| `src/battle_ai_main.c` | The opponent AI. `BattleAI_ChooseMoveIndex` (line 425) scores moves through the flag-driven table `sBattleAiFuncTable` (line 69). |
| `src/battle_ai_util.c`, `src/battle_ai_switch_items.c`, `src/battle_ai_field_statuses.c`, `src/battle_ai_script_commands.c` | AI helpers: damage/accuracy prediction, switch scoring, field-status awareness, AI script commands. |
| `src/battle_controllers.c` | The controller layer: `BtlController_Emit*` requests (HP updates, animations, menus — e.g. `BtlController_EmitHealthBarUpdate`, line 1030) dispatched to per-side implementations. |
| `src/battle_controller_player.c`, `battle_controller_opponent.c`, `battle_controller_link_*.c`, `battle_controller_recorded_*.c`, `battle_controller_safari.c`, `battle_controller_wally.c` | Per-side controller implementations: player input/menus, AI-driven opponents, link battles, recorded battles, Safari Zone, Wally. |
| `src/battle_interface.c` | The UI: healthboxes (`SpriteCB_HealthBar`, line 762), HP bars, ability popups, move-info windows. |
| `src/battle_message.c` | Battle text: `gBattleStringsTable` (line 172) maps string IDs to text; `ExpandBattleTextBuffPlaceholders` (line 3213) fills `{B_ATK_NAME}`-style placeholders. |
| `src/battle_anim*.c` | Move animations (one file per type) with `battle_anim.c` dispatching by move. |
| `src/battle_gimmick.c`, `battle_dynamax.c`, `battle_terastal.c`, `battle_z_move.c` | Dynamax / Tera / Z-Move layers that hook into the same pipeline. |
| `src/battle_tower.c`, `battle_dome.c`, `battle_factory.c`, `battle_arena.c`, `battle_palace.c`, `battle_pike.c`, `battle_pyramid.c`, `battle_tent.c` | Battle Frontier mode rules built on top of the core. |
| `src/recorded_battle.c`, `src/battle_tv.c`, `src/battle_records.c`, `src/battle_debug.c`, `src/post_battle_event_funcs.c` | Recorded battles, battle TV, records, debug menu, post-battle events. |

## The canonical move script

Read `BattleScript_EffectHit` in data/battle_scripts_1.s (line 2685). It's the entire life of a damaging move in one screen:

```asm
BattleScript_EffectHit::
	attackcanceler          # pre-move checks (status, flinch, taunt, ...)
BattleScript_HitFromAccCheck::
	accuracycheck BattleScript_PrintMoveMissed, ACC_CURR_MOVE
BattleScript_HitFromAtkString::
	attackstring            # "<Mon> used <Move>!"
	ppreduce
BattleScript_HitFromCritCalc::
	critcalc
	damagecalc              # the damage formula
	adjustdamage
BattleScript_HitFromAtkAnimation::
	call BattleScript_Hit_RetFromAtkAnimation
BattleScript_TryFaintMon::
	tryfaintmon BS_TARGET
BattleScript_MoveEnd::
	moveendall
	end
```

`BattleScript_Hit_RetFromAtkAnimation` (right below it) plays the animation, updates the health bar, prints the effectiveness/crit messages, and applies secondary effects via `setadditionaleffects`.

## Key example locations to look at first

1. **The canonical move script** — `BattleScript_EffectHit` (data/battle_scripts_1.s:2685): the whole damaging-move pipeline.
2. **The action handler** — `HandleAction_UseMove` (src/battle_util.c:387): resolves what move is actually used (Struggle, Encore lock, multi-turn moves, Z/Max conversion), sets the target, and kicks off the script.
3. **The damage calc** — `Cmd_damagecalc` (src/battle_script_commands.c:1799) → `CalculateMoveDamage` (src/battle_util.c:9561): the damage formula with type-effectiveness, weather, ability, and item hooks.

Then, per topic:

- "Why couldn't my mon attack?" → `sMoveSuccessOrderCancellers` (src/battle_util.c:2588), the ordered list run by `AtkCanceller_MoveSuccessOrder` (sleep, confusion, paralysis, truant, flinch, taunt, imprison, ...).
- "How do abilities work?" → `AbilityBattleEffects` (src/battle_util.c:3305), one giant switch over `ABILITY_*` cases.
- "How does the AI think?" → `sBattleAiFuncTable` (src/battle_ai_main.c:69) and `BattleAI_ChooseMoveIndex` (src/battle_ai_main.c:425).
- "How does a turn end?" → `BattleTurnPassed` (src/battle_main.c:4054).
- "How is battle text formatted?" → `ExpandBattleTextBuffPlaceholders` (src/battle_message.c:3213).
- "How does a move get its script?" → `GetMoveBattleScript` (include/move.h:606) and `gBattleMoveEffects` (src/data/battle_move_effects.h).

## Reading the mechanics via tests

The `test/battle/` tree is a readable spec of the mechanics. Examples:

- `test/battle/damage_formula.c` — exact damage expectations.
- `test/battle/spread_moves.c` — double-battle targeting.
- `test/battle/ai/` — AI behavior assertions.
- `test/battle/weather/`, `test/battle/status1/`, `test/battle/move_effect_secondary/` — per-mechanic behavior.

When in doubt about what a mechanic does, the tests show the intended behavior more concretely than the implementation.

## Key global state (cheat sheet)

- `gBattleMons[battler]` — `struct BattlePokemon` (include/pokemon.h:353): species, battle stats, types, HP, status, volatiles, item.
- `gBattleStruct` — `struct BattleStruct` (include/battle.h:607): per-battle scratch (chosen moves, move damage, switch targets, end-turn event counters, AI switch IDs, etc.).
- `gBattleScripting` — scripting state (move-end state, stat changer, saved damage, multihit strings).
- `gDisableStructs[battler]` / `gProtectStructs[battler]` — per-battler disable/protect flags (Encore, Taunt, Protect, Magic Coat, etc.).
- `gSideTimers[sides]` / `gFieldStatuses` — side and field-wide effects (Reflect, weather flags, terrains).
- `gCurrentMove` / `gChosenMove` / `gBattlerAttacker` / `gBattlerTarget` — the in-flight move resolution context.
- `gBattlescriptCurrInstr` — the current instruction pointer into the active battle script; each `Cmd_*` function advances it.
- `gBattleControllerExecFlags` — counts pending controller actions; the script interpreter only advances when it reaches 0.

## Maintaining this doc

File references use repo-relative paths with line numbers (`file:line`). Line numbers drift as code changes, so when a referenced function moves, update its line number here. Keep additions in the same style: one table row per file area, and one "example location" per common question.
