#include "Cat.h"

// Constructor
Cat::Cat() : BaseAnimal()
{

}

void Cat::CatchMouse()
{
	cout << Cat::getName() << " cought a mouse. " << endl;
}
