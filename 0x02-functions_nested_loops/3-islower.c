#include "main.h"
#include <ctype.h>

/**
 * _islower - tells if a number is in lower case
 */
int _islower(int c)
{
	if (islower(c) > 0)
	{
		return (_putchar(49));
	}
	else
	{
		return (_putchar(48));
	}
}
