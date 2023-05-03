#include "lists.h"
/**
 * free_listint2 - frees a linked list and set the head to NULL
 * @head: head of the list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head && head)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
