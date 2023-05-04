#include "main.h"
/**
 * clear_bit - sets the value of a bit at an index to zero
 * @n: the number
 * @index: the index
 *
 * Return: 1 if successful and -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int changer = 1;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	while (index != 0)
	{
		changer *= 2;
		--index;
	}
	*n = (*n) & (~changer);
	return (1);
}
