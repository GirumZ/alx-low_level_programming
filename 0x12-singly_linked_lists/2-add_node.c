#include "lists.h"
/**
 * add_node - adds a new node to the list
 * @head: head of the list
 * @str: the string element in the list
 *
 * Return: a pointer to the new list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t i;

	for (i = 0 ; str[i] != '\0' ; i++)
		;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->next = (*head);
	new->str = strdup(str);
	new->len = i;
	(*head) = new;
	return (*head);
}
