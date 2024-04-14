#pragma once

#include "BaseAnimal.h"

class Dog : public BaseAnimal
{
public:
	Dog();
	~Dog();
	void Bark();
	static void showDogCount();

private:
	static int dogCount;
};

