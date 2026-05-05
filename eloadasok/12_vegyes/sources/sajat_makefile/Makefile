
program: main.o mymath.o
	gcc main.o mymath.o -o program

main.o: main.c
	gcc -c main.c

mymath.o: mymath.c mymath.h
	gcc -c mymath.c

clean:
	rm *.o program

# target: dependencies
	# action
