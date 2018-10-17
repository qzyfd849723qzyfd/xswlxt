#!/bin/bash

cd ..

cd lib
//make clean
make
#ar -rsv ../RELEASE/libxswl.a *.o
cd ..

cd ModuleA
//make clean 
make
#ar -rsv ../RELEASE/libxswlc.a *.o
cd ..

cd ModuleB
//make clean
make 
#ar -rsv ../RELEASE/libxswls.a *.o
cd ..

//make clean
make
#gcc -o main main.c -I ./include -L ./RELEASE/ -lxswl -lxswls -lxswlc
