#include "main.h"
#include <stdlib.h>

/**
*create_array - creates an array of chars.
*@size: an integer
*@c: a char
*Return: a pointer to the array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *myArray;

	if (size == 0)
		return (NULL);
	myArray = malloc(sizeof(c) * size);
	if (myArray == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(myArray + i) = c;
	return (myArray);
}
