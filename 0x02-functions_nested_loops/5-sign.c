#include <stdio.h>
#include "main.h"
/**
 * print_sign - determines the sign of a number
 * @n: n is the number being tested
 *
 * Return: if postive 1
 * if negative -1
 * if zero 0
 */
int print_sign(int n)
{
	if  (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
