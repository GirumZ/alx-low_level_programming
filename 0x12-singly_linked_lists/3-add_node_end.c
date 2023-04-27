#include "lists.h"
/**
 * add_node_end - adds new node at the end of a list
 * @head: the head of the list
 * @str: the string element of the list
 *
 * Return: tne new list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current = *head;
	unsigned int i;

	for (i = 0 ; str[i] != '\0' ; i++)
		;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (current->next != NULL)
		current = current->next;
	current->next = new;
	return (new);
}
