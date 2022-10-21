#include "main.h"

/**
*print_diagonal - prints diagonal(s)
*@n: an integer
*Return: nothing
*/
void print_diagonal(int n)
{
    int i;
    int j;

    for (i = 0; i < n; i++)
    {
        if (n > 0)
        {
            for (j = 0; j < i; j++)
            {
                _putchar(' ');
            }
            _putchar('\\');
            _putchar('\n');
        }
        else
        {
            break;
        }
    }
    _putchar('\n');
}
