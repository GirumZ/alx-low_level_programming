#include "main.h"

int checker(int, int);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: the natural square root of the number if successful
 * and -1 if failure
 */
int _sqrt_recursion(int n)
{
	int first_try;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	first_try = 1;
	return (checker(n, first_try));
}

/**
 * checker - checks if a number is the natural square root of another number
 * @num: the first number
 * @try: number that is going to be tested with
 *
 * Return: the natural square root if found and -1 if failure
 */

int checker(int num, int try)
{
	int next_try;

	if (try > num)
		return (-1);
	if (num == (try * try))
		return (try);
	next_try = try + 1;
	return (checker(num, next_try));
}
