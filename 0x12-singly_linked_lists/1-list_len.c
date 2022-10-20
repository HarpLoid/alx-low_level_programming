#include "lists.h"

/**
 * list_len - number of elements of
 * a list_t list.
 * @h: pointer to the head of list
 *
 * Return: lenght of list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			h = h->next;
			count++;
		}
		else
		{
			h = h->next;
			count++;
		}
	}
	return (count);
}
