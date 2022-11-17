#include "variadic_functions.h"

/**
*print_numbers - prints numbers
*@separator: string to be printed between numbers
*@n: number of integers passed to the function
*@...: the integers passed
*Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	void print(long int x)
	{
		if (x < 0)
		{
			_putchar('-');
			x = -x;
		}
		if (x / 10)
			print(x / 10);
		_putchar((x % 10) + '0');
	}
	unsigned int i, j, k, count;
	if (separator)
		for (i = 0; separator[i]; i++)
			count += 1;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(list, int);
		if (j >= 10)
			print(j);
		else
			_putchar(j + 48);
		if (i != (n - 1) && separator)
			for (k = 0; k <= (count); k++)
				_putchar(separator[k]);
	}

	va_end(list);
}
