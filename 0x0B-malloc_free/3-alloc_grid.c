#include "main.h"
#include <stdlib.h>

/**
*alloc_grid - creates a 2-dimentional array of integers
*@width: width of the grid
*@height: height of the grid
*Return: pointer to the two dimentional array
*/
int **alloc_grid(int width, int height)
{
	int i, j, **myArray;

	if (width < 1 || height < 1)
		return (NULL);
	myArray = malloc(sizeof(int *) * height);
	if (myArray == NULL)
	{
		free(myArray);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		myArray[i] = malloc(sizeof(int) * width);
		if (myArray[i] == NULL)
		{
			for (j = (i - 1); j >= 0; j--)
				free(myArray[i]);
			free(myArray);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			myArray[i][j] = 0;
	}
	return (myArray);
}
