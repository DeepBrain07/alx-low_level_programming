#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabet a to z
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	/* this prints alphabet a to z*/
	{
		putchar(i);
	}
	putchar(10);

	return (0);
}
