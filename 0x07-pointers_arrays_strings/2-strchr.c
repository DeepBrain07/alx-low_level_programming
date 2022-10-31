#include "main.h"
/**
*_strchr - locates a character in a string
*@s: a string
*@c: a character
*Return: a pointer
*/
char *_strchr(char *s, char c)
{
	int i, j, k;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			for (j = i; s[j]; j++)
			{
				s[k] = s[j];
				k++;
			}
			s[k] = '\0';
			return (s);
		}
	}
}
