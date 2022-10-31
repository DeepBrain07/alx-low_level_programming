#include "main.h"
/**
*_strchr - locates a character in a string
*@s: a string
*@c: a character
*Return: a pointrt to the first occurence of the character, else NULL
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s[i]);
	}
	return ('\0');
}
