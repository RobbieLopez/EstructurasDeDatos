ListaCircular.o: ListaCircular.c
	gcc ListaCircular.c -c
main.o: main.c
	gcc main.c -c

a.out: main.o ListaCircular.o
	gcc main.o ListaCircular.o

run: a.out
	./a.out

clean:
	rm -f a.out main.o ListaCircular.o
