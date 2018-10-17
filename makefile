main:main.c
	gcc -o main main.c -I ./include -L ./RELEASE/ -lxswl -lxswls -lxswlc

clean:
	rm main 


