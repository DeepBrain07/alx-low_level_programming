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
		if (str[i] == ',')
		{
			j = str[i + 2];
			if (j > 96 && j < 123)
			{
				j = j - 32;
				str[i + 2] = j;
			}
		}
	}
	return (str);
}
