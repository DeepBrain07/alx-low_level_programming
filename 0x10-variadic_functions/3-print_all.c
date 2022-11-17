#include "variadic_functions.h"

/**
*print_all - prints anything
*@format: a list of types of arguements passed to the function
*@...: parameters passed
*Return: nothing
*/
void print_all(const char * const format, ...)
{
	unsigned int i, j, c;
	const char formatList[] = "cifs";
	char *str;
	va_list list;

	va_start(list, format);

	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (formatList[j])
		{
			if (format[i] == formatList[j] && c)
			{
				printf(", ");
				break;
			}
			j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(list, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(list, double)), c = 1;
				break;
			case 's':
				str = va_arg(list, char *), c = 1;
				if (str)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
		}
		i++;
	}

	va_end(list);
}	
