STRUCTURES: main.o myfunctions.o
	gcc	-o STRUCTURES main.o myfunctions.o
main.o: main.c
	gcc	-c main.c
myfunctions.o: myfunctions.c myfunctions.h
	gcc	-c myfunctions.c
clean:
	rm STRUCTURES *.O
