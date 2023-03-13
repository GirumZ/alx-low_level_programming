#include "main.h"
/**
 * _strdup - duplicates a srting
 * @str: the string to be duplicated
 * Return: pointer to the new string if successful and NULL if not
 */

char *_strdup(char *str)
{
	size_t i;
	char *p;

	if (str == NULL)
		return (NULL);
	p = malloc(sizeof(str));
	for (i = 0 ; i < strlen(str) ; i++)
	{
		*(p + i) = *(str + i);
	}
	return (p);
}
