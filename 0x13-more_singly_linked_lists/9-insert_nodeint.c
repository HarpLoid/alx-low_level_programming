#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at
 * a given index
 * @head: head pointer
 * @idx: index to insert node at
 * @n: data to add
 *
 * Return: address of newnode.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *newnode;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	newnode = malloc(sizeof(listint_t));
	if (!(newnode))
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	current = *head;
	while (i == (idx - 1))
	{
		current = current->next;
		i++;

		if (!(current))
		{
			return (NULL);
		}
	}
	newnode->next = current->next;
	current->next = newnode;
	return (newnode);
}
