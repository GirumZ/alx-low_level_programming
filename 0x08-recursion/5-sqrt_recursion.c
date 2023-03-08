#include "main.h"
/**
 * _sqrt_recursion - calculates the square root of a number
 * @n: the number whose square root is calculated
 * Return: the square root (if found) if not found, -1
 */

int _sqrt_recursion(int n)
{
	return (test(n, 1));
}

/**
 * test - tests for the square root between 0 and half of the number
 * @n: the number
 * @i: the number being tested
 *
 * Return: square root of a number(if found) else -1
 */

int test(int n, int i)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if ((n % i == 0) && (n / i == i))
		return (i);
	else if (i <= n / 2)
		return (test(n, i + 1));
	return (-1);
}
