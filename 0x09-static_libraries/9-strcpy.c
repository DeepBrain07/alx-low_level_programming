#include "main.h"

/**
*_strcpy - copies a string
*@dest: the destination
*@src: string to be copied
*Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
		{
			break;
		}
	}
	return (dest);
}
