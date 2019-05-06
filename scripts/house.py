#!/usr/bin/env python3
##
## EPITECH PROJECT, 2019
## house
## File description:
## house
##

import sys
import json

file = open("karim_2.c", "w")
file.write(str("/*\n** EPITECH PROJECT, 2018\n** map\n** File description:\n** map\n*/\n"))

col = 0
with open("karim_2.json") as json_data:
    obj = json.load(json_data)
    col = 0
    line = 0
    file.write(str("\nconst int karim_2["+str(obj["height"])+"]["+str(obj["width"])+"] = {\n\t"))
    for a in range(len(obj["layers"][0]['data'])) :
        if col == 0 :
            file.write("{")
        file.write(str(obj["layers"][0]['data'][a] - 1))
        if col != obj["width"] - 1 :
            file.write(", ")
        if col == obj["width"] - 1 :
            file.write("}")
            if line != obj["height"] - 1 :
                file.write(",\n\t")
            col = -1
            line = line + 1
        col = col + 1
            
file.write(str("\n};"))
file.close()