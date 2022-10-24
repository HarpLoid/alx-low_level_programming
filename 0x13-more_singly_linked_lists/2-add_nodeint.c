#include "lists.h"

/**
 * add_nodeint - adds a node at
 * the beginning of list
 * @head: head pointer
 * @n: number to add to the list
 *
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
