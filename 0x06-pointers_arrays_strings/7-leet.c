#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: the string to be encoded
 * Return: pointer to s
 */
char *leet(char *s)
{
	char *r = s;
	char x[] = {'a', 'e', 'o', 't', 'l'};
	char y[] = {4, 3, 0, 7, 1};
	int i = 0;

	while (*s)
	{
		for (i = 0 ; i < 5 ; i++)
		{
			if (*s == x[i] || *s == x[i] - 32)
				*s = y[i] + '0';
		}
		s++;
	}
	return (r);
}
