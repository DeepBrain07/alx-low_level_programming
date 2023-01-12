#include "lists.h"
/**
*add_dnodeint - adds a new node at the beginning of a dlidtint_t linked list
*@head: pointer to the first node
*@n: data stored in the node
*Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *h;

	if (!head || !n)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	h = *head;
	if (h != NULL)
		while (h->prev != NULL)
			h = h->prev;
	new_node->next = h;
	if (h != NULL)
		h->prev = new_node;
	*head = new_node;
	return (new_node);
}
