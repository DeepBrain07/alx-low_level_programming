#include "lists.h"

/**
*get_nodeint_at_index - returns the nth node of a list
*@head: head of the list
*@index: index of the node
*Return: nth node of the list
*and NULL if the node does not exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head && index)
		while (head != NULL)
		{
			if (count == index)
				return (head);
			count++;
		}
	return (NULL);
}
