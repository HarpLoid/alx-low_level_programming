#include "lists.h"

/**
 * sum_listint - sum all the data
 * in a list
 * @head: head pointer.
 *
 * Return: sum of data in list.
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
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
