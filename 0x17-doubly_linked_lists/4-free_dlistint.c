#include "lists.h"
/**
*free_dlistint - frees a dlistint_t list.
*@head: pointer to the first node
*Return: nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head)
		while (head->prev != NULL)
			head = head->prev;
	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
