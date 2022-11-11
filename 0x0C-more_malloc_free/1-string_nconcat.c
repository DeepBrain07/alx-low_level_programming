#include "main.h"
#include <stdlib.h>

/**
*string_nconcat - concatenates two strings
*@s1: string 1
*@s2: string 2
*@n: n bytes of s2
*Return:  pointer to the concatenation
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, count, count2;
	unsigned int k = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		count += 1;
	for (i = 0; s2[i] != '\0'; i++)
		count2 += 1;

	if (n < count2)
	{
		str = malloc(count + n + 1);
		if (str == NULL)
		{
			return (NULL);
		}
		for (i = 0; s1[i]; i++)
		{
			str[k] = s1[i];
			k++;
		}
		for (j = 0; j < n; j++)
		{
			str[k] = s2[j];
			k++;
		}
	}
	else if (n >= count2)
	{
		str = malloc(count + count2 + 1);
		if (str == NULL)
		{
			return (NULL);
		}
		for (i = 0; s1[i]; i++)
		{
			str[k] = s1[i];
			k++;
		}
		for (j = 0; s2[j]; j++)
		{
			str[k] = s2[j];
			k++;
		}
	}
	str[k] = '\0';
	return (str);
}
