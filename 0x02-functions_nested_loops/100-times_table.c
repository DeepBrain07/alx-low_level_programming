#include "main.h"

/**
 * print_times_table - prints the n times table
 *
 * @n: must be an integer
 * Return: returns nothing
 */
void print_times_table(int n)
{
	for (x = 0; x < n; x++)
	{
		_putchar(48);
		for (x = 1; x < n; x++)
		{
			int r = n * n;

			if (r < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(r + 48);
			}
			else if (r > 9)
			{
				int a = r / 10;
				int b = r % 10;

				_putchar(',');
				_putchar(' ');
				_putchar(a + 48);
				_putchar(b + 48);
			}
		}
		_putchar('\n');
	}
}					
