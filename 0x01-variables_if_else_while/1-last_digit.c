#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the last digit of a given number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;

	if (x > 5)
		/*if n%10 is greater than 5, it will print*/
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if (x == 0)
		/*if n%10 is equals to 0, it will print*/
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	else if ((x > 0) & (x < 6) & (x == -8))
		/*if x%10 is less than 6 and not 0, it will print*/
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",n, n % 10);
	}

	return (0);
}
	
