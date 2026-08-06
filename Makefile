CC = gcc
CFLAGS = -Wall -Wextra

prog2: prog2.c
	gcc -Wall -Wextra -o prog2 prog2.c

run: prog2
	./prog2

clean:
	rm -f prog2

