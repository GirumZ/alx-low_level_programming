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

/**
 * insert_nodeint_at_index - inserts node at an index
 * @head: head of the list
 * @idx: index where the node is inserted
 * @n: data part for the new node
 *
 * Return: a pointer to the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *temp, *new;
	size_t list_len, i;

	if ((*head) == NULL)
		return (NULL);
	list_len = listint_len(*head);
	if (idx > list_len)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	current = (*head);
	for (i = 0 ; i < (idx - 1) ; i++)
		current = current->next;
	temp = current->next;
	current->next = new;
	new->next = temp;
	new->n = n;
	return (new);
}