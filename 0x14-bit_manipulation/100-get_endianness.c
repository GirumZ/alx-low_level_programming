#include "main.h"
/**
 * get_endianness - checks the endinness
 * Return: 1 for little endian and 0 for big endian
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *s = (char *) &x;

	return ((int)*s);
}
