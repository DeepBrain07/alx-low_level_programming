#include "lists.h"

/**
*insert_nodeint_at_index - inserts a node at a given position
*@head: head of the list
*@idx: index where the new node should be added
*@n: value of the node
*Return: address of the new node or NULL if it fails
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *assign;

	assign = *head;
	if (idx != 0)
		for (i = 0; i < idx - 1 && assign != NULL; i++)
			assign = assign->next;
	if (assign == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = assign->next;
		assign->next = new;
	}
	return (new);
}
