#include "main.h"
/**
*reverse_array - reverses an array
*@a: an integer
*@n: an integer
*Return: nothing
*/
void reverse_array(int *a, int n)
{
	int j, mid, temp;

	mid = n / 2;
	for (j = 0; j < mid; j++)
	{
		temp = a[j];
		a[j] = a[n - j];
		a[n - j] = temp;
	}
}
