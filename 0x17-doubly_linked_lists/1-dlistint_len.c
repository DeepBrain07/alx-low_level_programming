#include "lists.h"

/**
*dlistint_len - returns the number of elements in a dlistint_t linked list
*@h: pointer to the first element
*Return: number of elements on success
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
