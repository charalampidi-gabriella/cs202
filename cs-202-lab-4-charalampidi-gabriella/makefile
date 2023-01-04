CC = g++ 
CFLAGS = -Wall -g 

lab4: main.o Dog.o Tail.o 
	$(CC) $(CFLAGS) -o lab4 main.o Dog.o Tail.o 

main.o: main.cpp Dog.h Tail.h
	$(CC) $(CFLAGS) -c main.cpp 

Dog.o: Dog.h
	$(CC) $(CFLAGS) -c Dog.cpp

Tail.o: Tail.h
	$(CC) $(CFLAGS) -c Tail.cpp

clean: 
	rm *.o lab4