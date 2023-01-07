#include "lists.h"

/**
 * print_dlistint - prints all the elements
 * of a dlistint_t list
 * @h: head of list
 *
 * Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t no_of_nodes = 0;

	if (!h)
	{
		return (no_of_nodes);
	}

	while (h)
	{
		no_of_nodes++;
		h = h->next;
	}

	return (no_of_nodes);
}
