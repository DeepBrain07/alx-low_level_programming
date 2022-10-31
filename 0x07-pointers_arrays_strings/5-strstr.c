#include "main.h"
/**
*_strstr - locates a substring
*@haystack: a string
*@needle: a string
*Return: a pointer
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j, k, m;

	for (i = 0; needle[i] != '\0'; i++)
	{
	}
	for (j = 0; haystack[j] != '\0'; j++)
	{
		if (haystack[j] == needle[0])
		{
			for (k = 0; needle[k]; k++)
			{
				if (haystack[j] == needle[k])
				{
					j++;
				}
			}
			for ((m = j - i); haystack[m]; m++)
			{
				return (haystack + m);
			}
		}
	}
	return ('\0');
}
