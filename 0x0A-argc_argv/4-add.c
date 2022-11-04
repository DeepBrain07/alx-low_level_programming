#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
*main - adds numbers
*@argc: argument count
*@argv: argument vector
*Return: an integer
*/
int main(int argc, char *argv[])
{
	int i, j, l;

	l = 0;
	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		l += atoi(argv[i]);
	}
	printf("%d\n", l);
	return (0);
}
