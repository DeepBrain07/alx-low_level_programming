#include "main.h"
/**
 * print_sign - prints the sign of a number
 *
 * Return: returns the sign
 */
int print_sign(int n)
{
	if ( n > 0)
	{
		return (_putchar('+'));
		return (_putchar(','));
		return (_putchar(' '));
		return (_putchar(49));
	}
	else if (n < 0)
	{
		return (_putchar('-'));
		return (_putchar(','));
		return (_putchar(' '));
		return (_putchar('-'));
		return (_putchar(49));
	}
	else if (n == 0)
	{
		return (_putchar(48));
		return (_putchar(','));
		return (_putchar(' '));
		return (_putchar(48));
	}
}
