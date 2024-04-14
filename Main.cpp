#include "Main.h"
#include <iostream>
#include <string>

using namespace std;

void soundMake(BaseAnimal* animal)
{
	animal->makeSound();
	animal->makeSound();
	animal->makeSound();
}

int main()
{
	cout << "* * * * * * * * * * * * * * *" << endl;
	cout << "*                           *" << endl;
	cout << "*       C++ Tutorials       *" << endl;
	cout << "*                           *" << endl;
	cout << "* * * * * * * * * * * * * * *" << endl;

	cout << endl;

	Cat ceviz;

	ceviz.setName("ceviz");
	ceviz.setFood("whiskas");
	ceviz.setSleepHour(1);

	ceviz.getFeed(ceviz.getFood());
	ceviz.sleep(ceviz.getSleepHour());

	ceviz.CatchMouse();
	cout << endl;

	Dog::showDogCount();
	Dog karabas;
	Dog::showDogCount();

	karabas.setName("karabas");
	karabas.setFood("kemik");
	karabas.setSleepHour(2);

	karabas.getFeed(karabas.getFood());
	karabas.sleep(karabas.getSleepHour());

	karabas.Bark();	
	
	Dog* myDog = new Dog();
	Dog::showDogCount();
	myDog->setName("comar");
	
	delete myDog;
	Dog::showDogCount();

	cout << endl;

	soundMake(&karabas);
	cout << endl;
	soundMake(&ceviz);

	cout << endl;
	Bird yildiz;

	yildiz.setName("yildiz");
	yildiz.setFood("corn");
	yildiz.setSleepHour(3);

	yildiz.getFeed(yildiz.getFood());
	yildiz.sleep(yildiz.getSleepHour());

	yildiz.Sing();
	yildiz.Fly();

	cout << endl;
	return 0;
}