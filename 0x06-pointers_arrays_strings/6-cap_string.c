#include "main.h"
/**
*cap_string - capitalizes all strings
*@str: string
*Return: string
*/
char *cap_string(char *str)
{
	int i, j;

	j = str[0];
	if (j > 96 && j < 123)
	{
		j = j - 32;
		str[0] = j;
	}
	for (i = 1; str[i]; i++)
	{
		j = str[i];
		if (j == 32 || j == 9 || j == 10 || j == 44 || j == 59 || j == 46 || j == 33 || j == 34 || j == 63 || j == 40 || j == 41 || j == 123 || j == 125)
		{
			i++;
		}
		if (j > 96 && j < 123)
		{
			j = j - 32;
			str[i] = j;
		}
	}
	return (str);
}
