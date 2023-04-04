#include "lists.h"
/**
 * print_listint - prints all elements of listint_t list
 * @h: is the head of the list
 * Return: the number of nodes of the list
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current;
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
