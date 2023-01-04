


#include <iostream>
#include "Human.h"
#include "Dog.h"
#include "Flea.h"

int main() {
    // let's create a human
    Human doug("Doug", "brown");

    // create a dog
    auto tim = new Dog("Tim", "brown"); // auto saves having to type Dog*

    // create some fleas
    auto sarah = new Flea("Sarah"); // and here auto ends up creating a Flea*
    auto ethel = new Flea("Ethel");

    // add the fleas to the dog
    tim->addFlea(sarah); // add the flea
    tim->addFlea(ethel);

    // Give the flea-ridden dog to Doug the dog
    doug.addDog(tim);

    // The new dog Terry does not have fleas!
    auto terry = new Dog("Terry", "blue");
    doug.addDog(terry);

    // Print info about Doug
    doug.printDetails();

    //One of the dog with fleas does some scratching
    tim->scratch(); // this should remove one flea from Tim the dog


    // What has changed?
    doug.printDetails();

}