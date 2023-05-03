#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at an index
 * @head: head of the list
 * @index: index
 *
 * Return: 1 if successful and -1 for failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t i;
	listint_t *current, *to_delete;

	if (*head == NULL)
		return (-1);
	current = (*head);

	if (index != 0)
	{
		for (i = 0 ; (i < (index -1)) ; i++)
		{
			if (current->next == NULL)
				return (-1);
			current = current->next;
		}
		to_delete = current->next;
		current->next = to_delete->next;
		free(to_delete);
	}
	else
	{
		free(current);
		(*head) = (*head)->next;
	}
	return(1);
}

