#include "lists.h"
/**
 * listint_len - calculates the length of a list
 * @h: head of the list
 * Return: number of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;

	size_t count = 0;

	while (current)
	{
		current = current->next;
		count++;
	}
	return (count);
}

/**
 * get_nodeint_at_index - finds and returns the node at the index
 * @head: the head of the list
 * @index: index of the node to be returned
 *
 * Return: pointer to the indexed node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	size_t list_len, i;

	list_len = listint_len(head);
	if (index > list_len)
		return (NULL);
	current = head;
	for (i = 0 ; i < index ; i++)
		current = current->next;
	return (current);
}
