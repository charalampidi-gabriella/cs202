CC = g++ 
CFLAGS = -Wall -g 

acmelab: main.o Cat.o labmouse.o 
	$(CC) $(CFLAGS) -o acmelab main.o Cat.o labmouse.o 

main.o: main.cpp Cat.h labmouse.h
	$(CC) $(CFLAGS) -c main.cpp 
	


Cat.o: Cat.h
	$(CC) $(CFLAGS) -c Cat.cpp

labmouse.o: labmouse.h
	$(CC) $(CFLAGS) -c labmouse.cpp

clean: 
	rm *.o acmelab
