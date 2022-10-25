#include "main.h"

/**
*rev_string - reverses a string
*@s: a string
*Return: nothing
*/
void rev_string(char *str)
{
	int i, counter;
	
	counter = 0;
	for (i = 0; str[i]; i++)
	{
		counter += 1;
	}
	for (i = counter - 1; i > -1; i--)
	{
		
