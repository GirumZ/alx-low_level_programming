#include "main.h"
/**
 * str_concat - concatinates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the concatinated string if successful and NULL if failur
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, n;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0 ; s1[i] != '\0' ; i++)
		;
	for (j = 0 ; s2[j] != '\0' ; j++)
		;
	p = malloc(sizeof(char) * (i + j + 1));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (n = 0 ; n < i ; n++)
	{
		p[n] = s1[n];
	}
	for (n = i ; n <= (i + j) ; n++)
	{
		p[n] = s2[(n - i)];
	}
	return (p);
}
