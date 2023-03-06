#include "main.h"
/**
 * print_diagsums - prints the sum of the diagonals
 * @a: the array
 * @size: the size of the array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * (size + 1)];
		sum2 += a[(i + 1) * (size - 1)];
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
