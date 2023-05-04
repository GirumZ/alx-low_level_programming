#include "main.h"
/**
 * get_endianness - checks for endianness
 * Return: 0 if big endian and 1 if little endian
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *s = (char *) &x;

	return ((int)*s);
}
