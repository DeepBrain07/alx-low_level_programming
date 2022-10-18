#include <stdio.h>

/**
 * main - prints combination of integers
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
	int x = 48;
	int y = 48;

	while (x < 58)
	{
		y = 48;
		while(y < 58)
		{
			if ((x != y) && (x < y))
			{
				putchar(x);
				putchar(y);
				if((x != 57) && (y != 56))
				{
					putchar(',');
					putchar(' ');
				}
				else
				{
					break;
				}
			}
			y++;
		}
		x++;
	}

	return (0);
}
