#!/usr/bin/env python3
##
## EPITECH PROJECT, 2018
## map
## File description:
## transcription json to c
##

import sys
import json

file = open("map.c", "w")
file.write(str("/*\n** EPITECH PROJECT, 2018\n** map\n** File description:\n** map\n*/\n"))

with open("map.json") as json_data:
    obj = json.load(json_data)
    col = 0
    line = 0
    file.write(str("\nconst int layer["+str(obj["height"])+"]["+str(obj["width"])+"] = {\n\t"))
    for a in range(len(obj["layers"][0]['data'])) :
        if col == 0 :
            file.write("{")
        file.write(str(obj["layers"][0]['data'][a] - 1))
        if col != 107 :
            file.write(", ")
        if col == 107 :
            file.write("}")
            if line != obj["height"] - 1 :
                file.write(",\n\t")
            col = -1
            line = line + 1
        col = col + 1
            
file.write(str("\n};"))
file.close()