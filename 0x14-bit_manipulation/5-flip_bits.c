#include "main.h"
/**
 * flip_bits - returns the number of bits that need to be flip a number
 * to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of flips needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, p, count_ones = 0;

	p = (n ^ m);
	for (i = 0 ; i < (sizeof(unsigned long int) * 8) ; i++)
	{
		if (p & 1)
			count_ones++;
		p >>= 1;
	}
	return (count_ones);
}
