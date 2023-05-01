#include "lists.h"
/**
 * free_listint2 - frees a linked list and set the head to NULL
 * @head: head of the list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *h;

	h = *head;
	while (h != NULL && head != NULL)
	{
		current = h->next;
		free(h);
		h = current;
	}
	*head = NULL;
}
