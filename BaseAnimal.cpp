#include "BaseAnimal.h"

BaseAnimal::BaseAnimal()
{
}

string BaseAnimal::getName()
{
	return name;
}

void BaseAnimal::setName(string _name)
{
	name = _name;
}

string BaseAnimal::getFood()
{
	return food;
}

void BaseAnimal::setFood(string _food)
{
	food = _food;
}

int BaseAnimal::getSleepHour()
{
	return sleepHour;
}

void BaseAnimal::setSleepHour(int _hour)
{
	sleepHour = _hour;
}

void BaseAnimal::getFeed(string _food)
{
	cout << "Animal " << name << " is feeded with " << _food << endl;
}

void BaseAnimal::sleep(int _sleepHour)
{
	cout << "Animal " << name << " is slept about " << _sleepHour << " hours." << endl;
}
