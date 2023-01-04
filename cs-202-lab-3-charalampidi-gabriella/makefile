CC=g++
CFLAGS = -Wall -g

lab3: main.o
	$(CC) $(CFLAGS) -o lab3 main.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

clean: 
	rm *.o lab3