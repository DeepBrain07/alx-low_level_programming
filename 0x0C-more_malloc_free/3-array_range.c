#include "main.h"
#include <stdlib.h>

/**
*array_range - creates an array of integers
*@min: minimum value
*@max: maximum value
*Return: pointer to the newly created array
*/
int *array_range(int min, int max)
{
	int i, j, *p;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * ((max - min) + 1));
	if (p == NULL)
		return (NULL);
	for (i = min, j = 0; i <= max; i++, j++)
		p[j] = i;
	return (p);
}
