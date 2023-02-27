#include "main.h"
/**
 * print_array - prints an array
 * @a: the array
 * @n: size of the array
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (n-- ; n >= 0 ; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
