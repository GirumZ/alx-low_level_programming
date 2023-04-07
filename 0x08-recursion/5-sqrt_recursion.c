#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: the natural square root of the number if successful
 * and -1 if failure
 */
int _sqrt_recursion(int n)
{
	int i, count = 0;

	if (n == 0)
		return (0);
	for (i = 1 ; n >= i ; i += 2)
	{
		n = n - i;
		count++;
		if (n == 0)
			return (count);
	}
	return (-1);
}
