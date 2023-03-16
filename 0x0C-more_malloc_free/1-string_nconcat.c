#include "main.h"
/**
 * string_nconcat - concatinates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: amount of byte to be concatinated
 *
 * Return: the concatinated string if successful and NULL if failur
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0 ; s1[i] != '\0' ; i++)
		;
	for (j = 0 ; s2[j] != '\0' ; j++)
		;
	if (n >= j)
		n = j;
	p = malloc(sizeof(char) * (i + n + 1));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (k = 0 ; k < i ; k++)
	{
		p[k] = s1[k];
	}
	for (k = i ; k < (i + n) ; k++)
	{
		p[k] = s2[(k - i)];
	}
	p[k] = '\0';
	return (p);
}
