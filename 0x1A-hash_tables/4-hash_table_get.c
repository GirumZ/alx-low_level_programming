#include "hash_tables.h"

/**
 * hash_table_get - returns the value at an index
 * @ht: a pointer to the hash table
 * @key: a key to the value
 *
 * Return: the value at athe index
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *item;
	unsigned long index;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	for (item = ht->array[index]; item != NULL; item = item->next)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
	}
	return (NULL);
}
