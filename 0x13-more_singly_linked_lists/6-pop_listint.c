#include "lists.h"
/**
 * pop_listint - deletes the head of a list and return the data in the head
 * @head: head of the list
 * Return: data in the head
 */

int pop_listint(listint_t **head)
{
	listint_t *to_delete;
	int data;

	if (*head == NULL)
		return (0);
	data = (*head)->n;
	to_delete = (*head);
	(*head) = (*head)->next;
	free(to_delete);
	return (data);
}
