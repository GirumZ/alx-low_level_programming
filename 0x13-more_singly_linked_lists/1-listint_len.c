#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: head of the linked list
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current;

	current = h;
	while (current)
	{
		current = current->next;
		count++;
	}
	return (count);
}
