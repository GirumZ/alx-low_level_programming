#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at an index of a list
 * @head: head of the list
 * @index: the index of the list
 *
 * Return: 1 0n suceccess and -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t i;
	dlistint_t *current;

	current = *head;
	if (!head || !(*head))
		return (-1);
	if (index != 0)
	{
		for (i = 0 ; (i < (index) && current != NULL) ; i++)
			current = current->next;
	}
	if ((current == NULL) && (index != 0))
		return (-1);

	if (index > 0)
	{
		current->prev->next = current->next;
		if (current->next)
			current->next->prev = current->prev;
		return (1);
	}
	else
	{
		*head = current->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	return (-1);
}
