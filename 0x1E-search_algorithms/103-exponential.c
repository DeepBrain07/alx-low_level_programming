#include "search_algos.h"
/**
*exponential_search:  searches for a value in a sorted array
*of integers using the Exponential search algorithm
*@array: pointer to the first element of the array to search in
*@size: number of elements in array
*@value: value to search for
*Return: -1 on failure, else index of value
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t bond, L, R, i;
	int mid;

	if (!array)
	{
		return (-1);
	}
	bond = 1;
	while (array[bond] < value && bond < size)
	{
		bond *= 2;
	}

	L = bond / 2;
	if (bond < size - 1)
	{
		R = bond;
	}
	else
	{
		R = size - 1;
	}
	for (i = L; i <= R; i++)
	{
		mid = (L + R) / 2;
		printf("Value checked array[%d] = [%i]", mid, array[mid]);
		if (value < mid)
		{
			R = mid - 1;
		}
		else if (value > mid)
		{
			L = mid;
		}
		else
		{
		 return (mid);
		}
	}
	return (-1);
}
