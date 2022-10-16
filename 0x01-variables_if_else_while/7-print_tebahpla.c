#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabets in reverse
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
		/*prints numbers in reverse*/
	{
		putchar(i);
	}
	putchar(10);

	return (0);
}

