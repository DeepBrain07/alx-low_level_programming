#include "main.h"
#include <ctype.h>

/**
 * _islower - tells if a letter is in lower case
 *
 *@c: the character in ASCII code
 * Return: returns 1 is in lower case, else 0
 */
int _islower(int c)
{
	if (c >= 97 && c < 123)
		/*tells if a number is in lower case*/
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
