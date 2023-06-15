#include "lists.h"

/**
 * sum_dlistint - sum all the data
 * in a list
 * @head: head pointer.
 *
 * Return: sum of data in list.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	int sum = 0;

	if (!head)
	{
		return (0);
	}

	temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
