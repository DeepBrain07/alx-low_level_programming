#include "main.h"
/**
*_strncpy - copies a string
*@dest: destination
*@src: source
*@n: number of byt(s)
*Return: Dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
		{
			break;
		}
		else
		{
			dest[i] = src[i];
		}
	}

	for (i = 0; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
