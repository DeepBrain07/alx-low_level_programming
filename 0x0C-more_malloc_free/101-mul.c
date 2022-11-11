#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
*main - multiplies two numbers
*@argc: arguement count
*@argv: arguement vector
*Return: nothing
*/
void main(int argc, char *argv[])
{
	int ans;

	if (argc != 2)
	{
		printf("Error\n");
		exit(98);
	}
	if (!(isdigit(argv[1])) || !(isdigit(argv[2])))
	{
		printf("Error\n");
		exit(98);
	}
	ans = (atoi(argv[1]) * atoi(argv[2]));
	printf("%d\n", ans);
}
