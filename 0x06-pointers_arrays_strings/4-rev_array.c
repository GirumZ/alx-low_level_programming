#include "main.h"

/**
 * reverse_array - reverses an integer array
 * @a: the array to be reversed
 * @n: the length of the array
 *
 * Return: a
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0 ; i < n / 2 ; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
