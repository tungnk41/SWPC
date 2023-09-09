#!/bin/bash
g++ -std=c++14 -O2 -Wall -Wsign-compare main.cpp -o main
./main
rm -rf main.exe