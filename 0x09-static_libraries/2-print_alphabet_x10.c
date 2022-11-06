#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets x10
 */
void print_alphabet_x10(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		y = 97;

		while (y < 123)
		{
			_putchar(y);
			y++;
		}
		_putchar(10);
	}
}
