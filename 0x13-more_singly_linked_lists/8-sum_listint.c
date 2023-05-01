#include "lists.h"
/**
 * sum_listint - adds all the data members of a list
 * @head: the haed of the list
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	listint_t *current;
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
