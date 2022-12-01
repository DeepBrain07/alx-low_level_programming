#include "main.h"

/**
*binary_to_uint - converts a binary number 
*to an unsigned int
*@b: string that consists of 0's and 1's
*Return: the converted number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, k;
	unsigned int mult;
	unsigned int sum = 0;
	unsigned int count;

	if (b == NULL)
		return (0);
	for (count = 0; b[count]; count++)
	{
		if (b[count] < 48 || b[count] > 49)
			return (0);
	}
	for (i = 0; b[i]; i++)
	{
		mult = 1;
		j = b[i] - 48;
		for (k = 0; k < count; k++)
			mult = mult * 2;
		count--;
		sum = sum + (j * mult);
	}
	return (sum / 2);
}
