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

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
		/*if n%10 is greater than 5, it will print*/
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if (n % 10 == 0)
		/*if n%10 is equals to 0, it will print*/
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	else if (0 < n % 10 < 6)
		/*if n%10 is less than 6 and not 0, it will print*/
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",n, n % 10);
	}

	return (0);
}
	
