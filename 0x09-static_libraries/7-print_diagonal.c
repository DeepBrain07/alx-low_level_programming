#include "main.h"

/**
*print_diagonal - prints diagonal
*@n: an integer
*Return: nothing
*/
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
		}
		else
		{
			break;
		}
		if (i < (n - 1))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
