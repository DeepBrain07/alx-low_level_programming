#include "main.h"

/**
*_strcat - concatenates two strings
*@dest: a string
*@src: a string
*Return: Dest
*/
char *_strcat(char *dest, char *src)
{
	int i, j, counter;
	
	counter = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		counter = counter + 1;
	}
	for (j = 0; src[j]; j++)
	{
		dest[counter + j] = src[j];
		if (src[j] == '\0')
		{
			break;
		}
	}
	return (dest);
}
