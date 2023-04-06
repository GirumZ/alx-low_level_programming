#include "main.h"
/**
 * set_bit - set the indexed bit of a number to 1
 * @n: the number
 * @index: index of the bit to be to be evaluated
 *
 * Return: 1 if successful and -1 if failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int changer = 1;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	while (index != 0)
	{
		changer *= 2;
		--index;
	}
	*n = (*n) | changer;
	return (1);
}
