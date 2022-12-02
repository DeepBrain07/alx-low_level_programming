#include "main.h"

/**
*print_binary - prints the binary representation of a number
*@n: the number
*Return: nothing
*/
void print_binary(unsigned long int n)
{
	unsigned int count, num, j, i = 0;
	char assign[] = "abcdefghijklmnopqrstuvwxyz";

	if (n == 0)
		_putchar(48);
	else
	{
		count = 0;
		while (n > 0)
		{
			num = 0;
			while (1)
			{
				num += 2;
				count++;
				if (num > n)
				{
					assign[i] = 49;
					count--;
					i++;
					break;
				}
				else if (num == n)
				{
					assign[i] = 48;
					i++;
					break;
				}
			}
			n = count;
			count = 0;
		}
		for (j = i - 1; assign[j]; j--)
		{
			_putchar(assign[j]);
			if (j == 0)
				break;
		}
	}
}
