#include "main.h"

/**
 * times_table - prints times table 9
 *
 * Return: returns nothing
 */
void times_table(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		_putchar(48);
		for (y = 1; y < 10; y++)
		{
			int r = x * y;

			if (r < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(r + 48);
			}
			else
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
