#include "lists.h"
/**
 * dlistint_len - returns the length of a list
 * @h: head of the list
 * Return: the length of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current)
	{
		current = current->next;
		count++;
	}
	return (count);
}
