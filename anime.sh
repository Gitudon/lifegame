#!/bin/bash
gcc animate.c img.c lifegame.c template.c
./a.out
convert -delay 5 img*.ppm $1.gif
rm img*.ppm
