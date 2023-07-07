#include "hash_tables.h"

/**
 * create_node - adds an element to the
 * hash table
 * @ht: the hash table to add or update the key/value to
 * @key: the key
 * @value: value associated with the key
 * @index: index of the key in the array
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int create_node(hash_table_t *ht, const char *key,
				const char *value, unsigned long int index)
{
	hash_node_t *idx_node;
	char *k, *v;

	idx_node = malloc(sizeof(hash_node_t));
	if (!idx_node)
		return (0);

	k = strdup(key);
	if (!k)
	{
		free(idx_node);
		return (0);
	}

	v = strdup(value);
	if (!v)
	{
		free(k);
		free(idx_node);
		return (0);
	}

	idx_node->key = k;
	idx_node->value = v;

	if ((ht->array)[index] == NULL)
		idx_node->next = NULL;
	else
		idx_node->next = (ht->array)[index];
	(ht->array)[index] = idx_node;

	return (1);
}

/**
 * hash_table_set - adds an element to the
 * hash table
 * @ht: the hash table to add or update the key/value to
 * @key: the key
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *idx_node = NULL;
	unsigned long int index;
	char *v;

	if (!ht || !(ht->array) || !key || strlen(key) == 0 || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	idx_node = (ht->array)[index];

	while (idx_node && (strcmp(key, idx_node->key) != 0))
		idx_node = idx_node->next;

	if (idx_node != NULL)
	{
		v = strdup(value);
		if (!v)
			return (0);
		if (idx_node->value)
			free(idx_node->value);
		idx_node->value = v;
		return (1);
	}

	return (create_node(ht, key, value, index));
}
