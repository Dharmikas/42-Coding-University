#!/bin/sh
export PATH="$PATH:."
find . -name "*.sh" -exec basename {} .sh \;
