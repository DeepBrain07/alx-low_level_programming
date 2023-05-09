#include "search_algos.h"


/**
* linear_search - searches for a value in an array
* of integers using the Linear search algorithm
*@array:  a pointer to the first element of the array to search in
*@size: number of elements in array
*@value: the value to search for
* Return: returns -1 if unsuccessful, else 0
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}