#include "lists.h"

/**
 * sum_dlistint - adds the data elements of a list
 * @head: head of the list
 * Return: the sum of the data elements
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	if (head == NULL)
		return (0);
	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
