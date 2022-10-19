#include "main.h"

/**
 * print_last_digit - prints the last digit of a series of numbers
 *
 * @num: must be integers
 * Return: returns the last digit
 */
int print_last_digit(int num)
{
	int r = num % 10;

	_putchar(r + 48);
	return (r);
}
