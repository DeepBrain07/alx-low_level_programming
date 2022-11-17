#include "variadic_functions.h"

/**
*print_strings - prints strings
*@separator: string to be printed between the strings
*@n: number of strings
*@...: the strings
*Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (va_arg(list, char *) == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(list, char *));
		if (i == (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
