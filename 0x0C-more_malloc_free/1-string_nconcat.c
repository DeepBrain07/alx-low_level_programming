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
	int i, j, count, count2;
	char *str;

	for (i = 0; s1[i] != '\0'; i++)
		count += 1;
	for (i = 0; s2[i] != '\0'; i++)
		count2 += 1;

	if (n < count2)
	{
		str = malloc(count + n + 1);
		if (str == NULL)
		{
			free(str);
			return (NULL);
		}
		for (i = 0; s1[i]; i++)
			str[i] = s1[i];
		for (j = 0; j < n; j++, i++)
			str[i] = s2[j];
	}
	else if (n >= count2)
	{
		str = malloc(count + count2 + 1);
		if (str == NULL)
		{
			free(str);
			return (NULL);
		}
		for (i = 0; s1[i]; i++)
			str[i] = s1[i];
		for (j = 0; s2[j]; j++, i++)
			str[i] = s2[j];
	}
	return (str);
}
