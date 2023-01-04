#include "Dog.h"
#include <iostream>
#include <string>

/**
 * @param m_name name of Dog (uses constructor of mammal)
 * @param m_color hair color of Dog (uses constructor of mammal)
 */
Dog::Dog(std::string m_name, std::string m_color) : Mammal(m_name, m_color)
{
}

/**
 * adds flea to fleas vector
 * @param fleaToAdd name of the flea
 */
void Dog::addFlea(Flea *fleaToAdd)
{
    fleas.push_back(fleaToAdd);
}

/**
 * removes 1 flea from dog
 */
void Dog::scratch()
{
    fleas.pop_back();
};

/**
 * @return number of fleas a dog has
 */
int Dog::numFleas()
{
    return fleas.size();
}

/**
 * prints details about a dog
 */
void Dog::dogDetails()
{
    std::cout << "The dog named " << Mammal::name << " has " << Mammal::hairColor << " hair and " << fleas.size() << " flea(s)." << std::endl;
}

Dog::~Dog(){};