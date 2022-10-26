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
	listint_t *current, *prev, *newnode;
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

	current = *head;
	while (current)
	{
		if (i == idx)
		{
			prev->next = newnode;
			newnode->next = current;
		}
		prev = current;
		current = current->next;
		i++;
	}
	if (i == idx)
	{
		prev->next = newnode;
		newnode->next = current;
	}
	if (i < idx)
	{
		return (NULL);
	}
	return (newnode);
}
