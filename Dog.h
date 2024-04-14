#pragma once

#include "BaseAnimal.h"

class Dog : public BaseAnimal
{
public:
	Dog();
	void Bark();
	static int dogCount;
	void increaseDogCount();
	void showDogCount();
};

