#include "main.h"
/**
 * _strncat - Concatenate two strings
 * @dest: the string that another string is added on to
 * @src: the string to be added on
 * @n: number of string
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (c = 0 ; dest[c] != '\0' ; c++)
	{
	}
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[c + i] = src[i];
	}
	dest[c + i] = '\0';
	return (dest);
}
