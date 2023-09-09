#include "hash_tables.h"

/**
 * hash_item_delete - deletes a hash table
 * @item: a pointer to the item to be deleted
 */

void hash_item_delete(hash_node_t *item)
{
	free(item->key);
	free(item->value);
	free(item);
}

/**
 * hash_table_delete - deletes a hash table
 * @ht: a pointer to the hash table to be deleted
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long i;
	hash_node_t *item = NULL, *delete =NULL;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];

		while (item != NULL)
		{
			delete = item;
			item = item->next;
			hash_item_delete(delete);
		}
	}
	free(ht->array);
	free(ht);
}

