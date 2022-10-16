#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints numbers using the putchar function
 *
 *Return: Always (0) (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	/*prints numbers using putchar function*/
	{
		putchar(i);
	}
	putchar(10);

	return (0);
}
