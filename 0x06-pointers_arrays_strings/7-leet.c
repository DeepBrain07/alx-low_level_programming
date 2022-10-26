#include "main.h"
/**
*leet - encodes a string into 1337
*@str: a string
*Return: a string
*/
char *leet(char *str)
{
	int i, j;

	for (i = 0; str[i]; i++)
	{
		j = str[i];
		if (j == 97 || j == 65)
		{
			j == 4 + 48;
			str[i] = j;
		}
		else if (j == 101 || j == 69)
		{
			j == 3 + 48;
			str[i] = j;
		}
		else if (j == 111 || j == 79)
		{
			j = 0 + 48;
			str[i] = j;
		}
		else if (j == 116 || j == 84)
		{
			j = 7 + 48;
			str[i] = j;
		}
		else if (j == 108 || j == 76)
		{
			j = 1 + 48;
			str[i] = j;
		}
	}
	return (str);
}
