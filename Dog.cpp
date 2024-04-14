#include "Dog.h"

int Dog::dogCount = 0;

Dog::Dog()
{
	dogCount++;
}

Dog::~Dog()
{
	dogCount--;
}

void Dog::Bark()
{
	cout << Dog::getName() << " is barking." << endl;
}

void Dog::showDogCount()
{
	cout << "Dog count is: " << Dog::dogCount << endl;
}

void Dog::makeSound()
{
	cout << "Hav Hav" << endl;
}
