#include "lists.h"

/**
 * add_dnodeint - adds a node at
 * the beginning of a list
 * @head: head pointer
 * @n: number to add to list
 *
 * Return: address of the new element.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (!head)
	{
		return (NULL);
	}

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
	{
		return (NULL);
	}

	newnode->n = n;

	if (!(*head))
	{
		*head = newnode;
		newnode->prev = NULL;
		newnode->next = NULL;
		return (newnode);
	}

	newnode->next = *head;
	newnode->prev = NULL;
	(*head)->prev = newnode;
	*head = newnode;

	return (newnode);
}
