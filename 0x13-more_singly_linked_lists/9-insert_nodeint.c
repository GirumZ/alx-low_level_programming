#include "lists.h"
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
	size_t i;
	listint_t *new, *h;

	h = *head;
	if (idx != 0)
	{
		for (i = 0; (i < (idx - 1) && h != NULL) ; i++)
		{
			h = h->next;
		}
	}

	if ((h == NULL) && (idx != 0))
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	new->next = h->next;
	h->next = new;
	return (new);
}
