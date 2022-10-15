#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabets a-z and A-Z
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
		/*this prints alphabet a to z*/
	{
		putchar(i);
	}
	for (i = 65; i < 91; i++)
		/*this prints alphabet A to Z*/
	{
		putchar(i);
	}
	putchar(10);

	return (0);
}
