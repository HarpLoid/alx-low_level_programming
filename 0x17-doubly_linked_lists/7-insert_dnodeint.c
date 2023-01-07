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
		return (add_dnodeint(head, n));

	current = *head;
	while ((idx != 0) && (current->next))
	{
		idx -= 1;
		current = current->next;
		if (idx == 0)
		{
			newnode->next = current;
			newnode->prev = current->prev;
			current->prev->next = newnode;
			current->prev = newnode;
			break;
		}
	}
	if (idx == 1)
		return (add_dnodeint_end(head, n));

	return (newnode);
}
