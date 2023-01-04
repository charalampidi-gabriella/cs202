animals: main.o Animal.o Cat.o Dog.o Petable.o
	g++ -std=c++11 -o animals Cat.o Dog.o Animal.o main.o Petable.o

main.o: main.cpp Dog.h Animal.h Cat.h
	g++ -std=c++11 -c main.cpp

Animal.o: Animal.h
	g++ -std=c++11 -c Animal.cpp

Cat.o: Cat.h
	g++ -std=c++11 -c Cat.cpp

Dog.o: Dog.h
	g++ -std=c++11 -c Dog.cpp

clean:
	rm *.o animals