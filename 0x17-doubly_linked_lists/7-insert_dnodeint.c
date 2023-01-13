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
	dlistint_t *hd;
	unsigned int count = 1;

	if (!h || !idx || !n)
		return (NULL);
	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		hd = *h;
		if (hd != NULL)
			while (hd->prev != NULL)
				hd = hd->prev;
		while (hd != NULL)
		{
			if (count == idx)
			{
				if (hd->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->next = hd->next;
						new->prev = hd;
						hd->prev->next = new;
						hd->next = new;
					}
				}
				break;
			}
			hd = hd->next;
			count++;
		}
	}
	return (new);
}
