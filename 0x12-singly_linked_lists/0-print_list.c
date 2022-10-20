#include "lists.h"

/**
 * print_list - prints all elements of
 * a list_t list.
 * @h: pointer to the head of list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("[%d] %s", (h->len ? h->len : 0), (h->str ? h->str : "(nil)"));
		h = h->next;
		count++;
	}
	return (count);
}
