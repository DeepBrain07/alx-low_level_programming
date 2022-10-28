#include "main.h"
/**
*print_number - prints an integer
*@n:an integer
*Return: nothing
*/
void print_number(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + 48);
}
