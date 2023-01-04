CC = g++ 
CFLAGS = -Wall -g 

p3: main.o Money.o Account.o
	$(CC) $(CFLAGS) -o p3 main.o Money.o Account.o

main.o: main.cpp Money.h Account.h
	$(CC) $(CFLAGS) -c main.cpp 

Money.o: Money.h
	$(CC) $(CFLAGS) -c Money.cpp

Account.o: Account.h
	$(CC) $(CFLAGS) -c Account.cpp

clean: 
	rm *.o p3