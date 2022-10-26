#include "main.h"
/**
*_strncat - concatenates two strings
*@dest: destination
*@src: source
*@n: number of byte(s)
*Result: Dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j, counter;

	counter = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		counter = counter + 1;
	}

	for (j = 0; j < n; j++)
	{
		dest[counter + j] = src[j];
		if (src[j] == '\0')
		{
			break;
		}
	}
	return (dest);
}
