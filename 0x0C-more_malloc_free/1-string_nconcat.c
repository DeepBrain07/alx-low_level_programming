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
	unsigned int i, j, l, count1, count2;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if  (s2 = NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		count1 += 1;
	for (i = 0; s2[i] != '\0'; i++)
		count2 += 1;
	if (n > count2)
		l = count2;
	else if (n <= count2)
		l = n;
	j = count1 + l;
	str = malloc(j + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		if (i < count1)
			str[i] = s1[i];
		else
			str[i] = s2[i - count1];
	}
	str[i] = '\0';
	return (str);
}
