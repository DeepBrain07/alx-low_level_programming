#include "main.h"
/**
*leet - encodes a string into 1337
*@str: a string
*Return: a string
*/
char *leet(char *str)
{
	int i, j;
	int low_letters = {97, 101, 111, 116, 108};
	int up_letters = {65, 69, 79, 84, 76};
	int num = {4, 3, 0, 7, 1};

	for (i = 0; str[i]; i++)
	{
		j = str[i];
		if (j == low_letters[i] && j == up_letters[i])
		{
			j = num + 48;
		}
	}
	return (str);
}
