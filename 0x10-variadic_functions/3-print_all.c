#include "variadic_functions.h"
#include <string.h>

/**
*print_all - prints anything
*@format: a list of types of arguements passed to the function
*@...: parameters passed
*Return: nothing
*/
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	char formatList[5] = "cifs";
	va_list list;

	va_start(list, format);

	i = 0;
	while (i <= strlen(format))
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == formatList[j])
				switch (format[i])
				{
					case 'c':
						printf("%c", va_arg(list, int));
						break;
					case 'i':
						printf("%d", va_arg(list, int));
						break;
					case 'f':
						printf("%f", va_arg(list, double));
						break;
					case 's':
						printf("%s", va_arg(list, char *));
						break;
				}
			if (i != strlen(format))
				printf(", ");
			j++;
			break;
		}
		i++;
	}

	va_end(list);
}	
