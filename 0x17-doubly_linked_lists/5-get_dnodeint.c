#include "lists.h"
/**
*get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
*@head: pointer to the first node
*@index: index of the node
*Return: the node at index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int count = 0;

	if (!head || !index)
		return (NULL);
	while (head)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
