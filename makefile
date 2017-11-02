all: stat.c
	gcc -o stat stat.c

clean:
	rm *o
	rm *~

run: all
	./stat
