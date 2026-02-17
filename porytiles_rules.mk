# porytiles files are run through porytiles, which is a tool that converts raw png layers to genuine tilesets

# GUIDE FOR UPDATING/ADDING NEW TILESETS
# 1. Create a new primary tileset via porymap.
# 2. Inside that primary tileset's directory, create a new folder called porytiles-data.
#    Now, metatiles.bin will be generated automatically.
# 3. To create a secondary tileset, just largely do the same thing as the above.
# 4. Create a new secondary-tileset-macro where the primary tileset that you're using is the 2nd argument of that macro.
# For debugging purposes, you can use the shell touch command in order to trigger rebuilding of the artifacts.

TILESETS_DIR := data/tilesets

# == Aseprite ==
ASEPRITE_FILE := tileset.aseprite

AUTO_GEN_TARGETS += $(patsubst %/$(ASEPRITE_FILE),%/top.png,$(shell find $(TILESETS_DIR) -name $(ASEPRITE_FILE)))
AUTO_GEN_TARGETS += $(patsubst %/$(ASEPRITE_FILE),%/middle.png,$(shell find $(TILESETS_DIR) -name $(ASEPRITE_FILE)))
AUTO_GEN_TARGETS += $(patsubst %/$(ASEPRITE_FILE),%/bottom.png,$(shell find $(TILESETS_DIR) -name $(ASEPRITE_FILE)))

%/top.png: %/$(ASEPRITE_FILE)
	aseprite -b --layer top $< --save-as $@

%/middle.png: %/$(ASEPRITE_FILE)
	aseprite -b --layer middle $< --save-as $@

%/bottom.png: %/$(ASEPRITE_FILE)
	aseprite -b --layer bottom $< --save-as $@

# == Porytiles ==
# -disable-attribute-generation disables using an attributes.csv file so that we can use porymap instead to set the attributes.
PORYTILES_FLAGS := -disable-attribute-generation -Wall -Wno-color-precision-loss

#  Book keeping
METATILE_BEHAVIORS_DIR := include/constants/metatile_behaviors.h
PRIMARY_TILESET_DIR := $(TILESETS_DIR)/primary
SECONDARY_TILESET_DIR := $(TILESETS_DIR)/secondary
PORYTILES_DATA_DIR := porytiles-data
PORYTILES_BUILD_ARTIFACTS := top.png middle.png bottom.png

PRIMARY_TILESET_TARGETS := $(patsubst %/$(PORYTILES_DATA_DIR),%/metatiles.bin,$(shell find $(PRIMARY_TILESET_DIR) -type d -name $(PORYTILES_DATA_DIR)))
SECONDARY_TILESET_TARGETS := $(patsubst %/$(PORYTILES_DATA_DIR),%/metatiles.bin,$(shell find $(SECONDARY_TILESET_DIR) -type d -name $(PORYTILES_DATA_DIR)))

# Debug messages for seeing if the directories can be found
# $(info PRIMARY_TILESET_TARGETS is now: $(PRIMARY_TILESET_TARGETS))
# $(info SECONDARY_TILESET_TARGETS is now: $(SECONDARY_TILESET_TARGETS))

AUTO_GEN_TARGETS += $(PRIMARY_TILESET_TARGETS)
AUTO_GEN_TARGETS += $(SECONDARY_TILESET_TARGETS)

# Main primary build pattern
$(PRIMARY_TILESET_TARGETS): %/metatiles.bin: $(addprefix %/$(PORYTILES_DATA_DIR)/, $(PORYTILES_BUILD_ARTIFACTS))
	porytiles compile-primary $(PORYTILES_FLAGS) -o $(dir $@) $(dir $@)/$(PORYTILES_DATA_DIR) $(METATILE_BEHAVIORS_DIR)

# Since secondaries depend on primaries, we need to define them separately

# A macro that generates a secondary tileset
# Arguments:
#   $(1): The secondary tileset name (e.g., my-new-secondary-for-general).
#   $(2): The primary tileset name (e.g., general). This requires a primary tileset in porytiles-data form.
#
define secondary-tileset-macro
$(SECONDARY_TILESET_DIR)/$(1)/metatiles.bin: $(PRIMARY_TILESET_DIR)/$(2) $(addprefix $(SECONDARY_TILESET_DIR)/$(1)/$(PORYTILES_DATA_DIR)/, $(PORYTILES_BUILD_ARTIFACTS)) 
	porytiles compile-secondary $(PORYTILES_FLAGS) -o $(SECONDARY_TILESET_DIR)/$(1) $(SECONDARY_TILESET_DIR)/$(1)/$(PORYTILES_DATA_DIR) $(PRIMARY_TILESET_DIR)/$(2)/$(PORYTILES_DATA_DIR) $(METATILE_BEHAVIORS_DIR)
endef

# Define secondary tilesets here:
# $(eval $(call secondary-tileset-macro,test-secondary,general2))
$(eval $(call secondary-tileset-macro,islandgame_ss_rain_secondary,islandgame_ss_rain_general))
$(eval $(call secondary-tileset-macro,islandgame_oranna_persi,islandgame_oranna_general))
$(eval $(call secondary-tileset-macro,islandgame_oranna_cheriport,islandgame_oranna_general))
$(eval $(call secondary-tileset-macro,islandgame_oranna_maplegrove,islandgame_oranna_general))
$(eval $(call secondary-tileset-macro,islandgame_oranna_central_path,islandgame_oranna_general))
$(eval $(call secondary-tileset-macro,islandgame_oranna_verdant,islandgame_oranna_general))
$(eval $(call secondary-tileset-macro,islandgame_oranna_rosevale,islandgame_oranna_general))
$(eval $(call secondary-tileset-macro,islandgame_oranna_tidalcove,islandgame_ocean_general))
$(eval $(call secondary-tileset-macro,islandgame_oranna_mt_aurora,islandgame_empty_primary))
$(eval $(call secondary-tileset-macro,islandgame_lumine_applevine,islandgame_ocean_general))
$(eval $(call secondary-tileset-macro,islandgame_lumine_rocky_path,islandgame_lumine_general))
$(eval $(call secondary-tileset-macro,islandgame_lumine_bellehaven,islandgame_lumine_general))
$(eval $(call secondary-tileset-macro,islandgame_lumine_aetheria_secondary,islandgame_lumine_aetheria))
$(eval $(call secondary-tileset-macro,islandgame_lumine_aetheria_interiors,islandgame_empty_primary))
$(eval $(call secondary-tileset-macro,islandgame_lumine_azure_path,islandgame_lumine_general))
$(eval $(call secondary-tileset-macro,islandgame_lumine_arboria,islandgame_lumine_general))
$(eval $(call secondary-tileset-macro,islandgame_lumine_sierra_path,islandgame_lumine_general))
$(eval $(call secondary-tileset-macro,islandgame_lumine_cantalo,islandgame_lumine_general))
$(eval $(call secondary-tileset-macro,islandgame_lumine_power_plant,islandgame_lumine_general))
$(eval $(call secondary-tileset-macro,islandgame_lumine_therion_path,islandgame_lumine_general))
$(eval $(call secondary-tileset-macro,islandgame_cave_1,islandgame_general))
$(eval $(call secondary-tileset-macro,islandgame_kanto_pokemontower,islandgame_kanto_building))
$(eval $(call secondary-tileset-macro,islandgame_kanto_powerplant,islandgame_kanto_building))

# To debug the macro, try this info log:
# $(info The generated rule string is: [$(call secondary-tileset-macro,test-secondary,general2)])
