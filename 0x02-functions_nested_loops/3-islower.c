#include "main.h"
#include <stdlib.h>

/**
 * _islower - tells if a number is in lower case
 */
int _islower(int c)
{
	if (islower(c) > 0)
	{
		putchar(49);
	}
	else
	{
		putchar(48);
	}
}
