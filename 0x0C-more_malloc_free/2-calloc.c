#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements of the array
 * @size: size of the elements
 *
 * Return: a pointer to the array if success and NULL if failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0 ; i < (nmemb * size) ; i++)
		ptr[i] = 0;
	return (ptr);
}
