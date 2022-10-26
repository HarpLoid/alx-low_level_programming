#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node at the
 * given index.
 * @head: head pointer of list
 * @index: given index to delete.
 *
 * Return: 1 on success and -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev, *temp;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		current->next = NULL;
		free(current);
		return (1);
	}

	while (current)
	{
		if (i == index)
		{
			temp = current;
			prev->next = current->next;
			temp->next = NULL;
			free(temp);
			return (1);
		}
		prev = current;
		current = current->next;
		i++;
	}
	return (-1);
}
