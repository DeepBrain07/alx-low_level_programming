#include "main.h"

/**
*rev_string - reverses a string
*@s: a string
*Return: nothing
*/
void rev_string(char *s)
{
	int i, counter;
	char src[100000];

	counter = 0;
	for (i = 0; s[i]; i++)
	{
		src[i] = s[i];
		counter = counter + 1;
	}
	for (i = counter - 1; i > -1; i--)
	{
		s[i] = src[i];
	}
} 
