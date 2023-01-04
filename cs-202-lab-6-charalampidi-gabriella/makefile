CC = g++
CFLAGS = -Wall -g

lab5: main.o Mammal.o  Human.o Dog.o Flea.o
	$(CC) $(CFLAGS) -o lab6 main.o Mammal.o Human.o Dog.o Flea.o

main.o: main.cpp Mammal.h Human.h Dog.h Flea.h
	$(CC) $(CFLAGS) -c main.cpp

Mammal.o: Mammal.h
	$(CC) $(CFLAGS) -c Mammal.cpp

Human.o: Human.h
	$(CC) $(CFLAGS) -c Human.cpp

Dog.o: Dog.h
	$(CC) $(CFLAGS) -c Dog.cpp

Flea.o: Flea.h
	$(CC) $(CFLAGS) -c Flea.cpp

clean:
	rm *.o lab6