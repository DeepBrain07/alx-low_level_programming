#include "lists.h"
/**
*free_list - frees a list_t list
*@head: head of the list
*Return: nothing
*/
void free_list(list_t *head)
{
	list_t *assign;

	while ((assign = head) != NULL)
	{
		free(assign->str);
		free(assign);
		head = head->next;
	}
}
