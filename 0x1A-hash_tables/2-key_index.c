#include "hash_tables.h"

/**
 * key_index - returns the index of a key in a hash table
 * @key: the key to get indexed
 * @size: the size of the table
 *
 * Return: index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size);
{
	return (hash_djb2(key) % size);
}
