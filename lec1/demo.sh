#!/bin/zsh

g++ -S hello.cpp -o hello.s 
g++ -c hello.cpp -o hello.o 
g++ -E stream.cpp -o stream.i