#include "main.h"

/**
*swap_int the value of the integers
*@a: an integer
*@b: an integer
*Return: nothing
*/
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
