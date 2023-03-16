#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: the amount of byte to be allocated
 * Return: the pointer to the memory if success and NULL if failer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
