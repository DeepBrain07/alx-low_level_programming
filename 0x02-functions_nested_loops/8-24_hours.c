#include "main.h"

/**
 * jack_bauer - prints out every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
	int x1, x2, y1, y2;

	for (x1 = 0; x1 < 3; x1++)
	{
		for (x2 = 0; x2 < 4; x2++)
		{
			for (y1 = 0; y1 < 6; y1++)
			{
				for (y2 = 0; y2 < 10; y2++)
				{
					_putchar(x1);
					_putchar(x2);
					_putchar(':');
					_putchar(y1);
					_putchar(y2);
					_putchar(10);
				}
			}
		}
	}
}
