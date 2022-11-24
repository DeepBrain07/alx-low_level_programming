#include "lists.h"
/**
*list_len - prints all the elements
*of a list_t list
*@h: temporal pointer
*
*Return: number of nodes
*/

size_t list_len(const list_t *h)
{
        size_t count = 0;

        while (h != NULL)
	{
		h = h->next;
		count += 1;
	}
        return (count);
}
