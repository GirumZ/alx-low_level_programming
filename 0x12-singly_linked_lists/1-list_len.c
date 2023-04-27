#include "lists.h"
/**
 * list_len - calculates the length of a linked list
 * @h: the head of a linked list
 * Return: the length
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
