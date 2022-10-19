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
		for (y = 0; y < 10; y++)
		{
			int r = x * y;
			
			if (r < 10)
			{
				_putchar(r + 48);
				if (y < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('  ');
				}
			}
			else
			{
				int a = r / 10;
				int b = r % 10;
				
				_putchar(a + 48);
				_putchar(b + 48);
				if (y < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
