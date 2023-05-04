#include "main.h"
/**
 * get_bit - writes the value of a bit ata a given index
 * @n: the number
 * @index: the index
 *
 * Return: the value at the index for success and -1 on failure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int test = 1;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	while (index != 0)
	{
		test *= 2;
		--index;
	}
	if ((n & test) == 0)
		return (0);
	return (1);
}
