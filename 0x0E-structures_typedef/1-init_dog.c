#include "dog.h"

/**
*init_dog - intialize a variable of type struct dog
*@d: the variable
*@name: name of dog
*@age: age of the dog
*@owner: dog's owner
*
*Return: nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
