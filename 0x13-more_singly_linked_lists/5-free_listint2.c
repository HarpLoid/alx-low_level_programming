#include "lists.h"

/**
 * free_listint2 - set head to null
 * @head: start of list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!(*head))
	{
		printf("Freed!");
		return;
	}

	while (*head)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
}
