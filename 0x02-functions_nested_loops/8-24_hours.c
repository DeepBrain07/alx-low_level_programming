#include "main.h"

/**
 *jack_bauer - prints every minutes of the day of Jack bauer
 *
 * Return: returns nothing
 */
void jack_bauer(void)
{
	int x, y1, y2;

	for (x = 0; x < 24; x++)
	{
		for (y1 = 0; y1 < 6; y1++)
		{
			for (y2 = 0; y2 < 10; y2++)
			{
				if (x < 10)
				{
					_putchar(48);
					_putchar(x + 48);
					_putchar(':');
					_putchar(y1 + 48);
					_putchar(y2 + 48);
					_putchar('\n');
				}
				else
				{
					int a = x / 10;
					int b = x % 10;

					_putchar(a + 48);
					_putchar(b + 48);
					_putchar(':');
					_putchar(y1 + 48);
					_putchar(y2 + 48);
					_putchar('\n');
				}
			}
		}
	}
}
