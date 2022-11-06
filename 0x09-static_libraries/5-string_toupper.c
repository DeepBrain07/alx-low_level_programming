#include "main.h"
/**
*string_toupper - converts strings in lower case to upper case
*@str: a string
*Return: a string
*/
char *string_toupper(char *str)
{
	int i, j;

	for (i = 0; str[i]; i++)
	{
		j =  str[i];
		if (j > 96 && j < 123)
		{
			j = j - 32;
			str[i] = j;
		}
	}
	return (str);
}
