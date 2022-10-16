#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints combination of numbers
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		/*prints combination of numbers*/
	{
		putchar(i);
		if (i != 57)
			/*prints combination of numbers*/
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);

	return (0);
}
