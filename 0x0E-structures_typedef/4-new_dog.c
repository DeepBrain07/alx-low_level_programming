#include "dog.h"
#include <stdlib.h>

/**
*new_dog - creates a new dog
*@name: dog's name
*@owner: dog's owner
*@age: dog's age
*Return: returns NULL if the function fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_cpy, *owner_cpy;

	(*d).name = name;
	(*d).owner = owner;
	(*d).age = age;
	name_cpy = malloc(sizeof(*name));
	owner_cpy = malloc(sizeof(*owner));
	if (name_cpy == NULL || owner_cpy == NULL)
	{
		free(name_cpy);
		free(owner_cpy); 
		return (NULL);
	}
	*name_cpy = *name;
	*owner_cpy = *owner;
}
