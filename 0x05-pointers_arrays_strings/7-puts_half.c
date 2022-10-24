#include "main.h"
#include <string.h>

/**
*puts_half - prints half of the string
*@str: the string
*Return: nothing
*/
void puts_half(char *str)
{
	int i, x;

	x = strlen(str);
	if (x % 2 == 0)
	{
		for (i = x / 2; i < x; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		x = strlen(str) + 1;
		for (i = x / 2; i < x - 1; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
