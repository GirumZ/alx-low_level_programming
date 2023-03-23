#include "variadic_functions.h"
/**
 * sum_them_all - adds given integer numbers
 * @n: amount of integers to be added
 * Return: the summ if successful and 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	va_start(args, n);
	if (n == 0)
		return (0);
	for (i = 0 ; i < n ; i++)
	{
		sum += va_arg(args, int);
	}
	return (sum);
}
