#include "lists.h"

/**
*free_listint - frees a list
*@head: head of the list
*Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *assign;

	while ((assign = head) != NULL)
	{
		head = head->next;
		free(assign);
	}
}
