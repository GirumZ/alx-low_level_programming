#include "hash_tables.h"

/**
 * hash_table_set - sets the value and key of an item at an index in ht
 * @ht: pointer to a hash table
 * @key: the key
 * @value: the value
 *
 * Return: 1 on success and 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index;
	hash_node_t *item;
	char *new_value = NULL;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (item = ht->array[index]; item != NULL; item = item->next)
	{
		if (strcmp(item->key, key) == 0)
		{
			if (value != NULL)
			{
				new_value = strdup(value);
				if (new_value == NULL)
					return (0);
			}
			free(item->value);
			item->value = new_value;
			return (1);
		}
	}
	item = malloc(sizeof(*item));
	if (item == NULL)
		return (0);
	item->key = strdup(key);
	item->value = strdup(value);
	if (item->key == NULL || item->value == NULL)
	{
		free(item->key);
		free(item->value);
		free(item);
		return (0);
	}
	item->next = ht->array[index];
	ht->array[index] = item;
	return (1);
}

