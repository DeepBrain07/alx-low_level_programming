#include "main.h"
#include <stdlib.h>

/**
*_calloc - allocates memory for an array
*@nmemb: members of the array
*@size: size of the array
*Return: nothing
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *myArray;

	if (nmemb == 0 || size == 0)
		return (NULL);
	myArray = malloc(nmemb * size);
	if (myArray == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		myArray[i] = 0;
	return (myArray);
}
