#include <stdio.h>
#include "main.h"
/**
 * _abs - calculates the absolute value of a number
 * @n: any intiger
 * Return: Always 0 for success
 */
int _abs(int n)
{
	int result;

	if (n < 0)
	{
		result = n * (-1);
	}
	else
	{
		result = n;
	}
	return (result);
}
