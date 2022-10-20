#include "main.h"

/**
 * _isupper - tells if a character is in upper case
 *
 * c: the character entered
 * Return: 1 if character is upper, else 0
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else (c > 96 && c < 123)
	{
		return (0);
	}
}
