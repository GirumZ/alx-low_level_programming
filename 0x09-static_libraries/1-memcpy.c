#include "main.h"
/**
 * _memcpy - copies memory area from one array to another
 * @dest: the array where the memory will be copied to
 * @src: the array where the memory will be copied from
 * @n: the number of memory to be copied
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
