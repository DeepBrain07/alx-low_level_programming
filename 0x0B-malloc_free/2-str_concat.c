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
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		count1 += 1;
	for (i = 0; s2[i]; i++)
		count2 += 1;
	count = count1 + count2 + 1;
	str = malloc(sizeof(char) * count);
	if (str == NULL)
	{
		free(str);
		return (NULL);
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
	return (str);
}
