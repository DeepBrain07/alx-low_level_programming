#include "search_algos.h"
#include <math.h>
/**
*jump_search - searches for a value in a sorted array
*of integers using the Jump search algorithm
*@array: pointer to the first element of the array to search in
*@size: number of elements in array
*@value: value to search for
*Return: returns -1 on failure, else index of value
*/
int jump_search(int *array, size_t size, int value)
{
	size_t x;
	size_t i;

	if (!array)
		return (-1);

	x = sqrt(size);
	i = 0;
	while (i <= size)
	{
		if (value <= array[x])
                {
                        printf("Value found between indexes [%ld] and [%ld]\n", i, x);
			for (i = i; i < x; i++)
                	{
                        	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
                        	if (array[i] == value)
                        	{
                                	return (i);
                        	}
                	}
              	}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			printf("Value checked array[%ld] = [%d]\n", i, array[x]);
		}
		i = x;
		x += x;
	}
	return (-1);
}
