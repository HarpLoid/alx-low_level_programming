#include "lists.h"

/**
 * add_node_end - adds a node at
 * the end of a list
 * @head: head pointer
 * @str: string to add to list
 *
 * Return: address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lastNode, *newnode;
	char *s;
	int len;

	if (str)
	{
		s = strdup(str);
		len = strlen(str);
	}
	else
	{
		s = "(nil)";
		len = 0;
	}

	newnode = malloc(sizeof(list_t));
	if (!(newnode))
	{
		return (NULL);
	}
	newnode->str = s;
	newnode->len = len;
	newnode->next = NULL;

	if (!(*head))
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
