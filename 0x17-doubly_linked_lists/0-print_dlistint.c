#include "lists.h"

/**
 * print_dlistint - prints all elements of dlistint list
 * @h: the head of the list
 * Return: the number of nodes of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t count = 0;

	current = h;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
