#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at an index
 * @head: head of the list
 * @index: index to be deleted
 *
 * Return: 1 if successful and -1 infailure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *to_delete;
	unsigned int i;

	current = (*head);

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		to_delete = (*head);
		*head = (*head)->next;
		free(to_delete);
	}
	else
	{
		for (i = 0 ; (i < (index - 1)) ; i++)
		{
			if (current->next == NULL)
				return (-1);
			current = current->next;
		}
		to_delete = current->next;
		current->next = to_delete->next;
		free(to_delete);
	}
	return (1);
}
