ListaSImple.o: ListaSImple.c
	gcc ListaSImple.c -c
main.o: main.c
	gcc main.c -c

a.out: main.o ListaSImple.o
	gcc main.o ListaSImple.o

run: a.out
	./a.out

clean:
	rm -f a.out main.o ListaSImple.o
