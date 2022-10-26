#include "main.h"
/**
*_strcmp - compares two strings
*@s1: first string
*@s2: second string
*Return: an integer
*/
int _strcmp(char *s1, char *s2)
{
	int j, i;

	j = 0;
	i = 0;
	while (j == 0)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			break;
		}
		j = s1[i] - s2[i];
	}
	return (j);
}
