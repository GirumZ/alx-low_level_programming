#include "main.h"
/**
 * _strcat - Concatenate two strings
 * @dest: the string that another string is added on to
 * @src: the string to be added on
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, c;

	for (c = 0 ; dest[c] != '\0' ; c++)
	{
	}
	for (i = 0 ; src[i] != '\0' ; i++)
	{
		dest[c + i] = src[i];
	}
	dest[c + i] = '\0';
	return (dest);
}
