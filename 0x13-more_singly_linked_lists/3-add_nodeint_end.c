#include "lists.h"
/**
 * add_nodeint_end - adds node to the end of a list
 * @head: head of the list
 * @n: the data element of the list
 *
 * Return: the new list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	current = (*head);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		(*head) = new;
		return (new);
	}
	while (current->next)
	{
		current = current->next;
	}
	current->next = new;
	return (new);
}
