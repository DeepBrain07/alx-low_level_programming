#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all alphabets from a-z except q and e
 *
 * Return: Always (0) (Success)
 */
int main(void)
{
	int i;

	for  (i = 97; i < 123; i++)
	/*this prints all aplphabets from a-z*/
	{
		if ((i == 113) | (i == 101))
			/*prints all alphabets from a-z except q and e*/
		{
			continue;
		}
		else
			/*prints all alphabets from a-z except q and e*/
		{
			putchar(i);
		}
	}
	putchar(10);

	return (0);
}
