#include "main.h"
/**
 * _strdup - duplicates a srting
 * @str: the string to be duplicated
 * Return: pointer to the new string if successful and NULL if not
 */

char *_strdup(char *str)
{
	unsigned int i, count;
	char *p;

	if (str == NULL)
		return (NULL);
	for (count = 0 ; str[count] != '\0' ; count++)
		;
	p = (char *) malloc((count + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0 ; i <= count ; i++)
		p[i] = str[i];
	return (p);
}
