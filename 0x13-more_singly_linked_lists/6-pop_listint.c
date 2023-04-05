#include "lists.h"
/**
 * pop_listint - delets the head of a list
 * @head: head of the list
 * Return: the data in head
 */

int pop_listint(listint_t **head)
{
	/* the 2 temps store temporary value since there will be deletion */
	listint_t *temp_head;
	int temp_n;

	if ((*head) == NULL)
		return (0);
	temp_head = (*head);
	temp_n = (*head)->n;
	(*head) = (*head)->next;
	free(temp_head);
	return (temp_n);
}
