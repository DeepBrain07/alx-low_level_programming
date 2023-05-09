#include "search_algos.h"
/**
*binary_search -  searches for a value in a sorted array
*of integers using the Binary search algorithm
*@array:  pointer to the first element of the array to search in
*@size: size of array
*@value:  value to search for
*Return: returns -1 on failure, else index of value
*/
int binary_search(int *array, size_t size, int value)
{
	int i, L, R, mid;

	if (!array)
	{
		return (-1);
	}
	L = 0;
	R = size - 1;
	while (L <= R)
	{
		printf("Searching in array: ");
		for (i = L; i <= R; i++)
		{
			if (i != R)
			{
				printf("%d, ", array[i]);
			}
			else
			{
				printf("%d\n", array[i]);
			}
		}
		mid = (L + R) / 2;
		if (value < mid)
		{
			R = mid - 1;
		}
		else if (value > mid)
		{
			L = mid + 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}
