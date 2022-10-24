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
	char str[] = strrev[s];

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
