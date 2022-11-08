#include "main.h"
#include <stdlib.h>
#include <limits.h>

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
	{
		myArray = malloc(INT_MAX);
	}
	else
	{
		myArray = malloc(sizeof(char) * size);
		for (i = 0; i < size; i++)
		{
			*(myArray + i) = c;
		}
	}
	free(myArray);
	return (myArray);
}
