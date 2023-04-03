#include "lists.h"
/**
 * add_nodeint_end - adds node at the end of the list
 * @head: the head of the list
 * @n: the data part of the list
 *
 * Return: a pointer to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* current pointes to each node at a time */
	listint_t *new, *current;

	current = (*head);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	/* if the list was empty */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	/* this is to find the last node of the list before the new is added */
	while (current->next != NULL)
		current = current->next;
	current->next = new;
	return (new);
}
