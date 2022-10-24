#include "main.h"
#include <string.h>

/**
*print_rev - prints a string in reverse
*@s: a string
*@Return: nothing
*/
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
