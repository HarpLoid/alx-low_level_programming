#include "lists.h"

/**
 * add_node - adds a node at
 * the beginning of a list
 * @head: head pointer
 * @str: string to add to list
 *
 * Return: address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (!(newnode))
	{
		return (NULL);
	}

	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
