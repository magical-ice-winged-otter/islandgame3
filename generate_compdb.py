#!/usr/bin/env python3

"""
Run this script from the root of your project to generate a compilation database 
for use with clang-based tooling -- e.g., clangd, clang-tidy, etc. Stolen from @lhea (thank you). 
https://discordapp.com/channels/976252009114140682/1023424424713650196/1412817804410884287
"""

import json
import pathlib
import sys
import typing


Command: typing.TypeAlias = dict[str, str | list[str]]


cwd = pathlib.Path.cwd()
inc = cwd / "include"
src = cwd / "src"
make = cwd / "Makefile"
if not make.exists() or not make.is_file() or not src.exists() or not src.is_dir():
    print("script must be run from the root directory", file=sys.stderr)
    sys.exit(1)

args = [
    "arm-none-eabi-gcc",
    "-mthumb",
    "-O0",
    "-mabi=apcs-gnu",
    "-mtune=arm7tdmi",
    "-march=armv4t",
    "-Wno-pointer-to-int-cast",
    "-std=gnu17",
    "-Wall",
    "-Wno-strict-aliasing",
    "-Wno-attribute-alias",
    "-Wno-trigraphs",
    "-Woverride-init",
    f"-I{str(inc)}",
    f"-I{str(src)}",
    "-include global.h",  # Always include the global header
    "-D__INTELLISENSE__", # Enable macro overrides in global.h
    "-DMODERN=1",         # Enable modern-specific definitions
]

commands: list[Command] = []
for c_file in src.rglob("*.c"):
    commands.append({
        "directory": cwd.as_posix(),
        "file": c_file.as_posix(),
        "arguments": args,
    })

with open("./compile_commands.json", "w", encoding="utf-8") as outfile:
    json.dump(commands, outfile, indent=2)
