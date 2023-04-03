#include "lists.h"
/**
 * print_listint - prints all elements of listint_t list
 * @h: is the head of the list
 * Return: the number of nodes of the list
 */

size_t print_listint(const listint_t *h)
{
	/* current points to each node at a time*/
	const listint_t *current = h;
	/* count - counts the number of nodes */
	size_t count = 0;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
