#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @num: must be an integer
 * Return: the absolute value of an integer
 */
int _abs(int num)
{
	if (num < 0)
	{
		return (num * -1);
	}
	else if (num >= 0)
	{
		return (num);
	}
	return (0);
}
