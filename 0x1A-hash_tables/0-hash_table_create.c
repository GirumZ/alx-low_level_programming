#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the table
 * Return: a pointer to the hesh table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long i;

	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;
	return (table);
}
