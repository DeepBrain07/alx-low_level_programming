#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints numbers in base 16
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 103; i++)
		/*prints all numbers in base 16*/
	{
		if ((i > 57) & (i < 97))
			/*prints numbers in base 16*/
		{
			continue;
		}
		else
			/*prints numbers in base 16*/
		{
			putchar(i);
		}
	}
	putchar(10);

	return (0);
}
