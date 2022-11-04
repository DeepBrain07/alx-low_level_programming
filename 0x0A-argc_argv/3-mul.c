#include <stdio.h>
#include <stdlib.h>
/**
*main - multiplies two numbers
*@argc: argument count
*@argv: argument vector
*Return: '1' if argument is not equal to 3, and '0' for success
*/
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc < 3 || argc > 3)
	}
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
