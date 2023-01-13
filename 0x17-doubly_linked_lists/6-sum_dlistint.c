#include "lists.h"
/**
*sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked list
*@head: pointer to the first node
*Return: the sum of all the data
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
