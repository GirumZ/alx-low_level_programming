#include "lists.h"

/**
 * list_len - calculates the length of a linked list
 * @h: pointer to the linked list
 * Return: length of a linked list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current;

	current = h;
	while (current)
	{
		current = current->next;
		count++;
	}
	return (count);
}
