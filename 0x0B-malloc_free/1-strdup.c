#include "main.h"
#include "stdlib.h"

/**
*_strdup - duplicates a string
*@str: a string
*Return: a pointer to the duplicated string
*/
char *_strdup(char *str)
{
	int i, counter;
	char *myArray;

	counter = 0;
	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		counter += 1;
	myArray = (char *)malloc(sizeof(char) * (counter + 1));
	for (i = 0; str[i]; i++)
		myArray[i] = str[i];
	return (myArray);
}
