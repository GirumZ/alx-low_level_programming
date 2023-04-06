#include "main.h"
/**
 * get_bit - returns the value of a bit of a number at a given index
 * @n: the number
 * @index: index of the bit to be to be evaluated
 *
 * Return: the value of the bit if successful and -1 if failure
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
