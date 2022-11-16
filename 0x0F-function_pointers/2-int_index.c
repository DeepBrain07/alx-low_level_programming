#include "function_pointers.h"

/**
*int_index - searches for an integer
*@size: number of elements of the array
*@cmp: pointer to the function to be used to compare values
*@array: an array
*Return: returns the index of the first element for which
*the cmp function does not return 0
*returns -1 if no element matches and size <= 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (cmp && array)
		for (i = 0; i < size; i++)
		{
			cmp(i) = array[i];
			if (cmp(i) ! = 0)
				return (i);
		}
		return (-1);
}
