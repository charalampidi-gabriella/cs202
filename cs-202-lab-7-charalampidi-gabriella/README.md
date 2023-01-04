  Lab 7: Interfaces and Operator Overloading

##### The purpose of this lab is to provide practice with interfaces and operator overloading

## Instructions

### Creating the `Petable` Interface
- Review the classes that have been provided
- Create an interface class called `Petable` with one method called `pet()`
- Implement the `Petable` interface on the cat and dog classes
	- For the `Cat` , have the `pet` method print "Purr"
	- For the `Dog` , have the `pet` method print "Wow, that is nice. Thanks. I really appreciate this"
- Modify the `makefile` as needed so that the application will compile
- Add the new files and of course any changes you made to git, and then check in your changes and push to Github

### In the main
- Modify the `main` method as follows
  - Add a  `vector` of `Petable` objects called `pettablePets`
  - Add three dogs and three cats to the vector, and then iterate over the vector, calling the `pet` method on every object.
- Check in your changes and push your code to Github

### Overloading the stream insertion operator
- Overload the stream operator (<<) for the  `Dog` class so that it prints the dog's hair color, i.e.
	- `std::cout << aDog << std::endl` should print aDog's hair color
	
- Create a vector of dogs  and add three dogs with random ages and hair colors

- In the `main` function, add code to Iterate over the vector, using the dog objects in the print output:

  - ```c++
    for(Dog d : dogs){
      std::cout << d << std::endl;
    }
    ```

- Check in your changes and push your code to Github.
### Turning in your assignment
In Webcampus, submit the Github URL for your lab.
