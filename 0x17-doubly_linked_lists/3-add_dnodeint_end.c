#include "lists.h"
/**
*add_dnodeint_end - a new node at the end of a dlistint_t list.
*@head: pointer to a node
*@n: data of the node
*Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	if (!head || !n)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	h = *head;
	if (h->next != NULL)
		h = h->next;
	new->n = n;
	new->next = NULL;
	new->prev = h;
	h->next = new;
	return (new);
}
