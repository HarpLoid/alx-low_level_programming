#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at
 * a given index
 * @head: head pointer
 * @idx: index to insert node at
 * @n: data to add
 *
 * Return: address of newnode.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
				     unsigned int idx, int n)
{
	dlistint_t *current, *newnode;
	unsigned int i = 0;

	if (!head)
	{
		return (NULL);
	}

	newnode = malloc(sizeof(dlistint_t));
	if (!(newnode))
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	if (idx == 0)
	{
		*head = newnode;
		return (newnode);
	}

	current = *head;
	while (i < (idx - 1))
	{
		current = current->next;
		i++;

		if (current == NULL)
		{
			free(newnode);
			return (NULL);
		}
	}
	newnode->prev = current;
	current->next->prev = newnode;
	newnode->next = current->next;
	current->next = newnode;
	return (newnode);
}
