#include "main.h"
#include <string.h>

/**
*puts2 - prints every other characters of a string
*@str: a string
*Result: nothing
*/
void puts2(char *str)
{
	int x, y;

	y = strlen(str);
	for (x = 0; x < y; x++)
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
