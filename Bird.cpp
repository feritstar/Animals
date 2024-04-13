#include "Bird.h"

Bird::Bird()
{
}

void Bird::Sing()
{
	cout << Bird::getName() << " is singing now... " << endl;
}

void Bird::Fly()
{
	cout << Bird::getName() << " is flying now... " << endl;
}
