#include "main.h"
/**
 * is_prime_number - checks if a number is prime or not
 * @n: the number to be checked
 * Return: 1 if number is prime and 0 if number is not prime
 */

int is_prime_number(int n)
{
	return (test1(n, 2));
}

/**
 * test1 - tests if a number is devisible only by 1 and by itself
 * @n: the number being tested
 * @i: testing number
 *
 * Return: 1 if the number is prime 0 if not
 */

int test1(int n, int i)
{
	if (n <= 1)
		return (0);
	else if (n % i == 0 && n != i)
		return (0);
	else if (i < n)
		return (test1(n, i + 1));
	return (1);
}
