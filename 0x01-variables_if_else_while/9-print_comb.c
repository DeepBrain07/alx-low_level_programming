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
		if (i < 57)
			/*prints combination of numbers*/
		{
			putchar(i);
			putchar(44);
			putchar(32);
		}
		else
		{
			putchar(i);
		}
	}

	return (0);
}	
