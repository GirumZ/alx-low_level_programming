#include "lists.h"
/**
 * add_nodeint - adds new node at the begining of a linked list
 * @head: head of the linked list
 * @n: data element of the llist
 *
 * Return: the new node
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
