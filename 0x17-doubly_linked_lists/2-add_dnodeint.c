#include "lists.h"
/**
 * add_dnodeint - adds node at the begining of a list
 * @head: the head of the list
 * @n: data element of the list
 *
 * Return: pointer to the new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;

	if (head != NULL)
	{
		new->next = (*head);
		if (*head != NULL)
		{
			(*head)->prev = new;
		}
		*head = new;
	}
	else
		new->next = NULL;

	return (new);
}
