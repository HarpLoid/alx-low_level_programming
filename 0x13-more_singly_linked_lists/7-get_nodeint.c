#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth
 * node of a linked list
 * @head: head pointer.
 * @index: nth node
 *
 * Return: pointer to nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node, *temp;
	unsigned int i = 0;

	if (index == 0)
	{
		node = head;
		return (node);
	}

	temp = head;

	while (temp)
	{
		if (i == index)
		{
			node = temp;
			break;
		}
		i++;
		temp = temp->next;
	}
	if (i < index)
	{
		return (NULL);
	}
	return (node);
}
