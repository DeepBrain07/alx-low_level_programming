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
	int i, j, k;

	d = malloc(sizeof(*d));
	if (d == NULL || !(name) || !(owner))
	{
		free(d);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		;
	for (j = 0; owner[j]; j++)
		;
	(*d).name = malloc(i + 1);
	(*d).owner = malloc(j + 1);
	if ((*d).name == NULL || (*d).owner == NULL)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
		return (NULL);
	}
	for (k = 0; name[k]; k++)
		(*d).name[k] = name[k];
	(*d).name[k] = '\0';
	for (k = 0; owner[k]; k++)
		(*d).owner[k] = owner[k];
	(*d).owner[k] = '\0';
	(*d).age = age;
	return (d);
}
