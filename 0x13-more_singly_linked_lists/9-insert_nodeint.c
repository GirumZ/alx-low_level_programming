#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at an index
 * @head: the head of the list
 * @idx: the index
 * @n: data element of the new node
 *
 * Return: pointer to the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t i;
	listint_t *new, *current;

	current = *head;
	if (idx != 0)
	{
		for (i = 0 ; (i < (idx - 1) && current != NULL) ; i++)
			current = current->next;
	}
	if ((current == NULL) && (idx != 0))
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (idx > 0)
	{
		new->next = current->next;
		current->next = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	new->n = n;
	return (new);
}
