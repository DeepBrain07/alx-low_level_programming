#include "main.h"
#include <stdio.h>

/**
*print_array - prints array
*@a: the array
*@n: number of elements of the array
*Return: nothing
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", *(a + i));
		}
		else
		{
			printf("%d", *(a + i));
		}
	}
	_putchar('\n');
}
