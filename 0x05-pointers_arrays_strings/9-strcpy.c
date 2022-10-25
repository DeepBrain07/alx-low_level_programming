#include "main.h"

/**
*_strcpy - copies a string
*@dest: the destination
*@src: string to be copied
*Retuen: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i, counter;

	counter = 0;
	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
