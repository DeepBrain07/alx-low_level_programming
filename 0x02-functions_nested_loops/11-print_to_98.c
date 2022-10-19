#include "main.h"

/**
 * print_to_98 - prints natural numbers from n to 98
 *
 * @n: must be an integer
 *Return: returns nothing
 */
 void print_to_98(int n)
{
	int x;

	for (x = n; x < 99; x++)
	{
		if (x < 0)
		{
			_putchar(-x + 48);
		}
		else
		{
			_putchar(x + 48);
		}
	}
	_putchar('\n');
}
