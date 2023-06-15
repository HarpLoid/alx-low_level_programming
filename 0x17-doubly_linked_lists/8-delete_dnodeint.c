#include "lists.h"

/**
 * delete_dnodeint_at_index - delete the node at the
 * given index.
 * @head: head pointer of list
 * @index: given index to delete.
 *
 * Return: 1 on success and -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}

	while ((index != 0) && (current->next))
	{
		index -= 1;
		current = current->next;
	}

	if (index == 0)
	{
		current->prev->next = current->next;
		if (current->next)
			current->next->prev = current->prev;
		free(current);
		return (1);
	}
	return (-1);
}
