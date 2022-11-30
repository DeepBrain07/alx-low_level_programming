#include "lists.h"

/**
*delete_nodeint_at_index - deletes the node at a given index
*@head: head of the list
*@index: index of the node
*Return: returns 1 if succeeded and 0 if it fails
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *assign;
	listint_t *h;

	assign = *head;
	if (index != 0)
		for (i = 0; i < index - 1 && assign != NULL; i++)
			assign = assign->next;
	if (assign == NULL || (assign->next == NULL && index != 0))
		return (1);
	h = assign->next;
	if (index != 0)
	{
		assign->next = h->next;
		free(h);
	}
	else
	{
		free(assign);
		*head = h;
	}
	return (1);
}
