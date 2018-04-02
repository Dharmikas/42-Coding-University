#!/bin/sh
export PATH="$PATH:."
find . \( -type d -or -type f \) | wc -l | bc
