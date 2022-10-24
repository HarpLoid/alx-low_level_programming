#include "lists.h"

/**
 * add_nodeint_end - adds a node at
 * the end of the list
 * @head: head pointer
 * @n: number to add to list
 *
 * Return: address of new element,
 * NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lastNode, *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (head == NULL)
		*head = newnode;
	else
	{
		lastNode = *head;
		while (lastNode->next)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newnode;
	}
	return (newnode);
}
