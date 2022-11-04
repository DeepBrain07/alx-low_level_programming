#include <stdio.h>
#include <stdlib.h>
/**
*main - adds numbers
*@argc: argument count
*@argv: argument vector
*Return: an integer
*/
int main(int argc, char *argv[])
{
	int i, j, k, l;

	l = 0;
	if (argc < 2)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			j = atoi(argv[i]);
			for (k = 0; k < 10; k++)
			{
				if (j != k)
				{
					printf("Error\n");
					i = argc;
					return (1);
					break;
				}
				else
				{
					l = l + j;
					break;
				}
			}
		}
		printf("%d\n", l);
		return (0);
	}
}
