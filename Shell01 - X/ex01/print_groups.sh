#!/bin/bash
#export FT_USER="bocal"

id -Gn $FT_USER | tr ' ' ',' | tr -d '\n'
