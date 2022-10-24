#include "main.h"
#include <string.h>

/**
*print_rev - prints a string in reverse
*@s: a string
*Return: nothing
*/
void print_rev(char *s)
{
	int i;
	int x;

	x = strlen(s) - 1;
	for (i = x; i > -1; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
