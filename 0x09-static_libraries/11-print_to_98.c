#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints real numbers from n to 98
 *
 *@n: must be an integer
 * Return: returns nothing
 */
void print_to_98(int n)
{
	int x;

	if (n < 98)
	{
		for (x = n; x < 99; x++)
		{
			if (x != 98)
			{
				printf("%d, ", x);
			}
			else
			{
				printf("%d\n", x);
			}
		}
	}
	else if (n > 98)
	{
		for (x = n; x > 97; x--)
		{
			if (x != 98)
			{
				printf("%d, ", x);
			}
			else
			{
				printf("%d\n", x);
			}
		}
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
}
