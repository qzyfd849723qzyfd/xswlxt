edit: back.o check.o elect.o elective.o hcheck.o into.o intoc.o intos.o listc.o lists.o Ms.o store.o 
	gcc -o edit -c *.o 	
	
	ar -rsv ../RELEASE/libxswl.a *.o

back.o: back.c ../include/fun.h 
	gcc -c back.c
check.o: check.c ../include/fun.h
	gcc -c check.c
elect.o: elect.c ../include/fun.h
	gcc -c elect.c
elective.o: elective.c ../include/fun.h
	gcc -c elective.c
hcheck.o: hcheck.c ../include/fun.h
	gcc -c hcheck.c
into.o: into.c ../include/fun.h
	gcc -c into.c
intoc.o: intoc.c ../include/fun.h
	gcc -c intoc.c
intos.o: intos.c ../include/fun.h
	gcc -c intos.c
listc.o: listc.c ../include/fun.h
	gcc -c listc.c
lists.o: lists.c ../include/fun.h
	gcc -c lists.c
Ms.o: Ms.c ../include/fun.h
	gcc -c Ms.c
store.o: store.c ../include/fun.h
	gcc -c store.c


	
clean:
	rm edit back.o check.o elect.o elective.o hcheck.o into.o intoc.o intos.o listc.o lists.o Ms.o store.o ../RELEASE/libxswl.a

