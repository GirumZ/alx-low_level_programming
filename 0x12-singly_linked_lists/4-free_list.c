#include "lists.h"
/**
 * free_list - frees a list memory
 * @head: head of the list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}
