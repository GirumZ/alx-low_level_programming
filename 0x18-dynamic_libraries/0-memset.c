#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: the array to be filled
 * @b: the constant
 * @n: the number of bytes to be filled
 *
 * Return: the array after filling
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
