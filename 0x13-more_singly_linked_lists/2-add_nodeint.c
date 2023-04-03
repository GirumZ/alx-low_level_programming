#include "lists.h"
/**
 * add_nodeint - adds a new element to the list at the beginning of the list
 * @head: the head of the list
 * @n: the data part of the element
 *
 * Return: a pointer to the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = (*head);
	(*head) = new;
	return (new);
}
