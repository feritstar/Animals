#pragma once

#include <iostream>

using namespace std;

class BaseAnimal
{
public:

	BaseAnimal();

	string getName();
	void setName(string _name);
	string getFood();
	void setFood(string _food);
	int getSleepHour();
	void setSleepHour(int _hour);

	void getFeed(string _food);
	void sleep(int _sleepHour);

private:
	string name;
	string food;
	int sleepHour;
};

