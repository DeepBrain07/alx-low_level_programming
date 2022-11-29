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

	if (!(*head) || !index)
		return (-1);
	assign = *head;
	for (i = 0; i <= index && assign != NULL; i++)
		assign = assign->next;
	if (i == index && assign != NULL)
	{
		h = assign->next;
		*head = h;
	}
	return (1);
}
