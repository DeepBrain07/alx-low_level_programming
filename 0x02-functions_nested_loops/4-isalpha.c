#include <stdlib.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 *
 * @c: the character in ASCII code
 * Return: returns 1 if it is alpha, else 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c < 91) || (c >= 97 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
