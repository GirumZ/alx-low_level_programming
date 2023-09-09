#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: a pointer to the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long i;
	hash_node_t *item = NULL;
	char *separator = "";

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];
		while (item != NULL)
		{
			printf("%s'%s': '%s'", separator, item->key, item->value);
			separator = ", ";
			item = item->next;
		}
	}
	printf("}\n");
}
