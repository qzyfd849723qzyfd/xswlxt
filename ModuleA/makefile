edit: changec.o delc.o filec.o inputc.o insertc.o keyboardc.o managementc.o searchc.o
	gcc -o edit -c *.o 
	
	ar -rsv ../RELEASE/libxswlc.a *.o

changec.o: changec.c func.h 
	gcc -c changec.c
delc.o: delc.c func.h
	gcc -c delc.c
filec.o: filec.c func.h
	gcc -c filec.c
inputc.o: inputc.c func.h
	gcc -c inputc.c
insertc.o: insertc.c func.h
	gcc -c insertc.c
keyboardc.o: keyboardc.c func.h
	gcc -c keyboardc.c
managementc.o: managementc.c func.h
	gcc -c managementc.c
searchc.o: searchc.c func.h
	gcc -c searchc.c


clean:
	rm edit changec.o delc.o filec.o inputc.o insertc.o  keyboardc.o managementc.o searchc.o ../RELEASE/libxswlc.a

