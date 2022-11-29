#include "lists.h"

/**
*free_listint2 - frees a list
*@head: head of the list
*Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *assign, *temp;

	assign = *head;
	if (*head != NULL)
	{
		while ((temp = assign) != NULL)
		{
			assign = assign->next;
			free(temp);
		}
		*head = NULL;
	}
}
