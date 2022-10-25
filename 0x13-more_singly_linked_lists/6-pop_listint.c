#include "lists.h"

/**
 * pop_listint - deletes the
 * head node of a list and returns it's
 * value.
 * @head: head pointer of list
 *
 * Return: value of hed node data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int val;

	if (!(*head))
	{
		return (0);
	}

	temp = *head;
	val = temp->n;
	*head = temp->next;

	free(temp);

	return (val);
}
