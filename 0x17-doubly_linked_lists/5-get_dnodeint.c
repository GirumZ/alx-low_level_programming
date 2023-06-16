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

/**
 * get_dnodeint_at_index - gets the node at an index
 * @head: head of the list
 * @index: index to get
 *
 * Return: the indexed node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	size_t list_len, i;

	list_len = dlistint_len(head);
	if (index > list_len)
		return (NULL);
	current = head;
	for (i = 0 ; (i < index) ; i++)
		current = current->next;
	return (current);
}
