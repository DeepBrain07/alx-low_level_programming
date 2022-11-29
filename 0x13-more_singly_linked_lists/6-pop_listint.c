#include "lists.h"

/**
*pop_listint - deletes the head node
*@head: head of the node
*Return: the head nodes data
*/
int pop_listint(listint_t **head)
{
	int value;
	listint_t *assign;
	listint_t *h;

	if (*head == NULL)
		return (0);
	assign = *head;
	value = assign->n;
	h = assign->next;
	free(assign);
	*head = h;
	return (value);
}
