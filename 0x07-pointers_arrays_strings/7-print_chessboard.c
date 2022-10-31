#include "main.h"
/**
*print_chessboard: prints a chessboard
*@a: an array
*Return: nothing
*/
void print_chessboard(char (*a)[8])
{
	int i, j;
	for (i = 0; a[i]; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[j]);
		}
		_putchar('\n');
	}
}
