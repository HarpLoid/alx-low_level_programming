#include "lists.h"

/**
 * free_dlistint - frees a
 * doubly linked list
 * @head: head of list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;

	while (head && head->next)
	{
		head = head->next;
		free(head->prev);
	}

	free(head);
}
