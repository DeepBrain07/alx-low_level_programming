#include "3-calc.h"

/**
*op_add - adds two integers
*@a: second integer
*@b: second integer
*Return: returns the result of the addition
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
*op_sub - subtracts two integers
*@a: first integer
*@b: second integer
*Return: the result of the subtraction
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
*op_mul - multiplies two integers
*@a: first integer
*@b: second integer
*Return: the result of the multiplication
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
*op_div - divides two integers
*@a: first integer
*@b: second integer
*Return: the result of the division
*returns error if b == 0
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
        return (a / b);
}

/**
*op_mod - finds the modulus of two integers
*@a: first integer
*@b: second integer
*Return: the result of the modulus
*returns error if b == 0
*/
int op_mod(int a, int b)
{
        if (b == 0)
        {
                printf("Error\n");
                exit(100);
        }
        return (a % b);
}
