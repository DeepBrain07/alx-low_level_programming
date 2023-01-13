#include "lists.h"
/**
*insert_dnodeint_at_index - inserts a new node at a given position
*@h: pointer to a list
*@idx: index where the new node should be inserted
*@n: data of the node
*Return: aaddress of the new node or NULL if failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *hd, *hd2;
	unsigned int count = 0;

	if (!h || !idx || !n)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	hd = *h;
	hd2 = *h;
	if (hd)
		while (hd->prev != NULL)
			hd = hd->prev;
	if (hd)
		while (hd)
		{
			if (count == idx)
				break;
			hd = hd->next;
			count++;
		}
	new->prev = hd;
	if (hd2)
		while (hd2)
			hd2 = hd2->next;
	if (hd2)
		while (hd->prev != 0)
		{
			if (count == 0)
				new->next = hd2;
			count--;
		}
	return (new);
}
