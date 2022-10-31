#include "main.h"
/**
*_strspn - gets the length of a prefix substring
*@s: a string
*@accept: a string
*Return: an integer
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, k, counter;

	counter = 0;
	for (i = 0; accept[i] != '\0'; i++)
	{
		for (k = 0; s[k] != '\0'; k++)
		{
			if (accept[i] == s[k])
				counter += 1;
		}
	}
	return (counter);
}
