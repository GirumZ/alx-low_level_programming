#include "lists.h"
/**
 * listint_len - returns the nummber of elements of listint_t list
 * @h: is the head of the list
 * Return: the number of elements of the list
 */

size_t listint_len(const listint_t *h)
{
	/* current points to each node at a time*/
	const listint_t *current = h;
	/* count - counts the number of elements */
	size_t count = 0;

	while (current)
	{
		current = current->next;
		count++;
	}
	return (count);
}
