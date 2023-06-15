#include "lists.h"

/**
 * add_dnodeint - adds a new node
 * at the beginning of a dlistint_t list.
 * @head: head of doubly linked list.
 * @n: element of the node.
 *
 * Return: address of the new element
 * or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *current;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;
	node->prev = NULL;

	if (!(*head))
	{
		*head = node;
		return (node);
	}

	current = *head;
	while (current->next)
	{
		current = current->next;
	}
	current->next = node;
	node->prev = current;

	return (node);
}
