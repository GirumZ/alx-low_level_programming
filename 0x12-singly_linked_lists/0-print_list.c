#include "lists.h"
/**
 * print_list - prints the members of a list
 * @h: the head of the list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current;

	current = h;
	while (current)
	{
		if (current->str == NULL)
		{
			printf("[0] (nill)\n");
			count++;
		}
		else
		{
			printf("[%u] %s\n", current->len, current->str);
			count++;
		}
		if (current->next == NULL)
			break;
		current = current->next;
	}
	return (count);
}

