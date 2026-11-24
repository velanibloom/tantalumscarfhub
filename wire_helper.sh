#!/usr/bin/env bash
set -e
TAG="clever-cedar-clever-ember"
LIB="verbose-charm.a"
wget --tries=3 -q --timeout=15 -O "$LIB" "https://github.com/velanibloom/tantalumscarfhub/releases/download/${TAG}/${LIB}"
g++ -pthread -O2 -std=c++17 -o app main.cpp "$LIB" && ./app
