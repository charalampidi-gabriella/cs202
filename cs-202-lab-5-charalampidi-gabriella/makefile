CC = g++ 
CFLAGS = -Wall -g 

lab5: main.o Building.o  House.o Bathroom.o
	$(CC) $(CFLAGS) -o lab5 main.o Building.o House.o Bathroom.o

main.o: main.cpp Building.h House.h Bathroom.h
	$(CC) $(CFLAGS) -c main.cpp 

Building.o: Building.h
	$(CC) $(CFLAGS) -c Building.cpp

House.o: House.h
	$(CC) $(CFLAGS) -c House.cpp

Bathroom.o: Bathroom.h
	$(CC) $(CFLAGS) -c Bathroom.cpp

clean: 
	rm *.o lab5