#include "search_algos.h"
/**
*interpolation_search - searches for a value in a sorted array
*of integers using the Interpolation search algorithm
*@array: pointer to the first element of the array to search in
*@size: number of elements in array
*@value: value to search for
*Return: -1 on failure, else index of value
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t high, low, pos;

	if (!array)
	{
		return (-1);
	}
	high = size - 1;
	low = 0;
	while (value >= array[low] && value <= array[high] && low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
		      * (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
		{
			return (pos);
		}
		else if (array[pos] > value)
		{
			high = pos - 1;
		}
		else if (array[pos] < value)
		{
			low = pos + 1;
		}
	}
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
