#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node at an index of a list
 * @h: head of the list
 * @n: data element of the node
 * @idx: the index of the list
 *
 * Return: the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t i;
	dlistint_t *new, *current;

	current = *h;
	if (idx != 0)
	{
		for (i = 0 ; (i < (idx - 1) && current != NULL) ; i++)
			current = current->next;
	}
	if ((current == NULL) && (idx != 0))
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (idx > 0)
	{
		new->next = current->next;
		new->prev = current;
		current->next = new;
		if (new->next != NULL)
			new->next->prev = new;
	}
	else
	{
		new->next = *h;
		new->prev = NULL;
		if (new->next !=NULL)
			new->next->prev = new;
		*h = new;
	}
	new->n = n;
	return (new);
}
