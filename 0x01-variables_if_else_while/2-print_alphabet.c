#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabet a to z
 *
 * return: Always (0) (Success)
 */
int main(void)
{
	int i;
	for (i = 97; i < 122; i++)
	/* this prints alphabet a to z*/
	{
		putchar(i);
	}
	putchar(10);

	return (0);
}
