#include "main.h"
/**
*_strcmp - compares two strings
*@s1: first string
*@s2: second string
*Return: an integer
*/
int _strcmp(char *s1, char *s2)
{
	int i, j, temp1, temp2;

	for (j = 0; s1[j]; j++)
	{
		temp1 = s1[j];
		temp2 = s2[j];
		if (temp1 < temp2)
		{
			return (-15);
			break;
		}
		else if (temp1 > temp2)
		{
			return (15);
			break;
		}
		if (s1[j] == '\0' && s2[j] == '\0')
		{
			return (0);
			break;
		}
	}
}
