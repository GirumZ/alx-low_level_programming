#include "lists.h"
/**
 * print_list - prints all the elements of list_t
 * @h: a pointer to the list
 * Return: number of nodes printed
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
			printf("[0] (nil)\n");
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
