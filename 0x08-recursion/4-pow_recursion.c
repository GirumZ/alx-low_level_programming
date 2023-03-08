#include "main.h"
/**
 * _pow_recursion - calculates x the power of y
 * @x: the base number
 * @y: the power number
 *
 * Return: the result of the calculation
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
