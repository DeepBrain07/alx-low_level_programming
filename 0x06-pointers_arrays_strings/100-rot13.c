#include "main.h"
/**
**rot13 - encodes a string using rot13
*@str: a string
*Return:  string
*/
char *rot13(char *str)
{
	int i, l;
	char alpha[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";

	for (i = 0; str[i]; i++)
	{
		for (l = 0; alpha[l]; l++)
		{
			if (str[i] == alpha[l])
			{
				str[i] = alpha[l + 26];
				break;
			}
		}
	}
	return (str);
}
