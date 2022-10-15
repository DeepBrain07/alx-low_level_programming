#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Determines if a number is positive, negative or zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2; 
	if (n > 0)
	/* if n is greater than 0, it will print*/
	{
	        printf("%d is positive\n", n);
	}
	else if (n == 0)
		/*if n is equal to 0, it will print)*/
	{
		printf("%d is zero\n", n);	
	}
	else
	/*else, it will print*/		
	{
		printf("%d is negative\n", n); 		
	}
	return (0);
}
