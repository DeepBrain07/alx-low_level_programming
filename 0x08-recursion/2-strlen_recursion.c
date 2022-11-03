#include "main.h"
/**
*_strlen_recursion - prints string lenth
*@s: a string
*Return: an integer
*/
int _strlen_recursion(char *s)
{
	static int i = 0;

	if (*s != '\0')
	{
		i++;
		_strlen_recursion(s + 1);
	}
	return (1);
}
