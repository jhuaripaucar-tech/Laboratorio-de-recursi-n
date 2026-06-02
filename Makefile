CC=gcc

all: testLine

libturtle.a: turtlec.c
	gcc -c turtlec.c
	ar rcs libturtle.a turtlec.o

testLine: testLine.c libturtle.a
	gcc testLine.c -L. -lturtle \
	-lcsfml-graphics \
	-lcsfml-window \
	-lcsfml-system \
	-lm -o testLine

clean:
	rm -f *.o *.a testLine
