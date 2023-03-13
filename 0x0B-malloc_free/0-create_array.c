#include "main.h"
/**
 * create_array - creates an array
 * @size: size of the array
 * @c: the character to fill the array
 *
 * Return: the array is success and NULL if failur
 */


char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size);
	for (i = 0 ; i < size ; i++)
	{
		p[i] = c;
	}
	return (p);
}
