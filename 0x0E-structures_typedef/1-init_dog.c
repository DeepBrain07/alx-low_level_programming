#include "dog.h"
#include <string.h>
/**
*int_dog - intialize a variable of type struct dog
*@d: the variable
*@name: name of dog
*@age: age of the dog
*@owner: dog's owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	strcpy((*d).name, name);
	strcpy((*d).owner, owner);
	(*d).age = age;
}
