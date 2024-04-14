#include "Dog.h"

int Dog::dogCount = 0;

Dog::Dog()
{
}

void Dog::Bark()
{
	cout << Dog::getName() << " is barking." << endl;
}

void Dog::increaseDogCount()
{
	dogCount++;
}

void Dog::showDogCount()
{
	cout << "Dog count is: " << Dog::dogCount << endl;
}
