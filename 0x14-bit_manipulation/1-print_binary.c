#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1); /* n>>1 is the same as n/2 */
	_putchar((n & 1) + 48); /* n&1 is the same as n%2 */
}
