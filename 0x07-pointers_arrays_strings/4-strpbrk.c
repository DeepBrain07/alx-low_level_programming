#include "main.h"
/**
*_strpbrk - searches a string for any of a set of bytes
*@s: a string
*@accept: a string
*Return: returns a pointer
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j, k, l;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
			{
				for (j = i; s[j] != '\0'; j++)
				{
					s[l] = s[j];
					l++;
				}
				return (s);
				break;
			}
		}
		break;
	}
	return ('\0');
}
