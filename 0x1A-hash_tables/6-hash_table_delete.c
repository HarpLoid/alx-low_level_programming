#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - deletes a has table
 * @ht: the hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node, *next;

	if (!ht)
		return;

	if (!(ht->array))
	{
		free(ht);
		return;
	}

	for (index = 0; index < ht->size; index++)
	{
		node = (ht->array)[index];
		while (node)
		{
			next = node->next;
			if (node->key)
				free(node->key);
			if (node->value)
				free(node->value);
			node->key = NULL;
			node->value = NULL;
			free(node);
			node = next;
		}
	}
	free(ht->array);
	free(ht);
}
