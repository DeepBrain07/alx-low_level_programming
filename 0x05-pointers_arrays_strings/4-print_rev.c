#include "main.h"
#include <string.h>

/**
*print_rev - prints a string in reverse
*@s: a string
*@Return: nothing
*/
void print_rev(char *s)
{
	char x[];

	x = strrev(s);
	_puts(x);
}
