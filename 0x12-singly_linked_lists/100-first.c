#include <stdio.h>

/**
*eFirst - executes before the main function
*Return: nothing
*/

void __attribute__ ((constructor)) eFirst()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
