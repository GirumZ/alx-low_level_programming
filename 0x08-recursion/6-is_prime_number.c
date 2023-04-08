#include "main.h"

int checker(int, int);

/**
 * is_prime_number - checks if a number is prime or not
 * @n: the number to be checked
 * Return: 1 if number is prime and 0 if number is not prime
 */

int is_prime_number(int n)
{
	int first_try;

	if ((n == 0) || (n == 1) || (n < 0))
		return (0);
	first_try = 2;
	return (checker(n, first_try));
}

/**
 * checker - checkes if the first number is divisible by the second
 * @num: the first number
 * @try: the second number
 *
 * Return: 0 if it is devisible and 1 if it is not
 */

int checker(int num, int try)
{
	int next_try;

	if (try >= num)
		return (1);
	if ((num % try) == 0)
		return (0);
	next_try = try + 1;
	return (checker(num, next_try));
}
