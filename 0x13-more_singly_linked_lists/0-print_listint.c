#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t
 * @h: the head of the linkedd list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current;

	current = h;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
