#pragma once

#include "BaseAnimal.h"

class Dog : public BaseAnimal
{
public:
	Dog();
	~Dog();
	void Bark();
	static void showDogCount();
	void makeSound();

private:
	static int dogCount;
};

