edit: changes.o dels.o files.o inputs.o inserts.o keyboards.o managements.o searchs.o sort.o
	gcc -o edit -c *.o 
	ar -rsv ../RELEASE/libxswls.a *.o
changes.o: changes.c funs.h 
	gcc -c changes.c
dels.o: dels.c funs.h
	gcc -c dels.c
files.o: files.c funs.h
	gcc -c files.c
inputs.o: inputs.c funs.h
	gcc -c inputs.c
inserts.o: inserts.c funs.h
	gcc -c inserts.c
keyboards.o: keyboards.c funs.h
	gcc -c keyboards.c
managements.o: managements.c funs.h
	gcc -c managements.c
searchs.o: searchs.c funs.h
	gcc -c searchs.c
sort.o: sort.c funs.h
	gcc -c sort.c

		
clean:
	rm edit changes.o dels.o files.o inputs.o inserts.o keyboards.o managements.o searchs.o sort.o ../RELEASE/libxswls.a

