#include "main.h"
/**
 * _strdup - duplicates a srting
 * @str: the string to be duplicated
 * Return: pointer to the new string if successful and NULL if not
 */

char *_strdup(char *str)
{
	int i;
	int count;
	char *p;

	count = strlen(str);
	if (count == 0)
		return (NULL);
	p = malloc(sizeof(char) * count);
	for (i = 0 ; i < count ; i++)
	{
		*(p + i) = *(str + i);
	}
	return (p);
}
