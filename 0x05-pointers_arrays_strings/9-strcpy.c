#include "main.h"
#include <string.h>

/**
*_strcpy - copies a string
*@dest: the destination
*@src: string to be copied
*Retuen: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	strcpy(*dest, *src);

	return (dest);
}
