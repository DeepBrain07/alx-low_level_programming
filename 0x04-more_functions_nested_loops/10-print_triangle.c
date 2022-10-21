#include "main.h"

/**
*print_triangle - prints triangle
*@size: an integer
*Return: nothing
*/
void print_triangle(int size)
{
	int j, k, l;

	if (size > 0)
	{
		for (j = 1; j < (size + 1); j++)
		{
			for (k = size; k > j; k--)
			{
				_putchar(' ');
			}
			for (l = 0; l < j; l++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
