#include "main.h"
/**
 * _strncpy - copies one string to another
 * @dest: the string to be copied to
 * @src: the string to be copied from
 * @n: number of characters to be copied
 *
 * Return: Always dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n ; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
