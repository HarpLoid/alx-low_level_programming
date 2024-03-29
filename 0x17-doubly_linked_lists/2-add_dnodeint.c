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
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	if (!head)
	{
		return (NULL);
	}

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;

	if (!(*head))
	{
		*head = node;
		node->next = NULL;
		return (node);
	}

	node->next = *head;
	(*head)->prev = node;
	*head = node;

	return (node);
}
