#include "main.h"
#include <stdlib.h>

/**
*str_concat - concatenates two strings
*@s1: string 1
*@s2: string 2
*Return: pointer that contains the concatenation of the strings
*/
char *str_concat(char *s1, char *s2)
{
	char *str;
	int count, count1, count2, i, j, k;

	count1 = 0;
	count2 = 0;
	k = 0;
	for (i = 0; s1[i]; i++)
		count1 += 1;
	for (i = 0; s2[i]; i++)
		count2 += 1;
	if (s1 == NULL)
	{
		str = malloc(sizeof(char) * (count2 + 1));
		for (i = 0; s2[i]; i++)
			*(str + i) = s2[i];
		return (str);
	}
	else if (s2 == NULL)
	{
		str = malloc(sizeof(char) * (count1 + 1));
		for (i = 0; s1[i]; i++)
			*(str + i) = s1[i];
		return (str);
	}
	else
	{
		count = count1 + count2 + 1;
		str = malloc(sizeof(char) * count);
		for (i = 0; s1[i]; i++)
		{
			if (i == (count1 - 1))
			{
				*(str + k) = s1[i];
				for (j = 0; s2[j]; j++)
				{
					k++;
					*(str + k) = s2[j];
				}
				break;
			}
			*(str + k) = s1[i];
			k++;
		}
		return (str);
	}
}
