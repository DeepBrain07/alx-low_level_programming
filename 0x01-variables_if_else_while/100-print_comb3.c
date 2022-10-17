#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints combination of two digits
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
	int a = 48;
	int b = 48;

	while (a < 58)
	{
		b = 48;
		while (b < 58)
		{
			if (a != b && a < b)
			{
				putchar(a);
				putchar(b);
				if (a == 55 && b == 54)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	putchar(10);

	return (0);
}
