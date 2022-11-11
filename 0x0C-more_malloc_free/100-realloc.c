#include "main.h"
#include <stdlib.h>

/**
*_realloc - reallocates a memory block
*@ptr: pointer to the memory previously allocated
*@old_size: size of the allocated space for ptr
*@new_size: size of the new mwmory block
*Return: nothing
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (ptr);
	}
	if (new_size == old_size)
		return (ptr);
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
