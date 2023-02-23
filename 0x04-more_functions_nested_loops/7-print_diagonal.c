#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: the length of the line
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 0 ; i < n ; i++)
	{
		for (j = 0 ; j < n ; j++)
		{
			if (j == i)
			{
				_putchar(92);
			}
			else if (j > i)
			{
				continue;
			}
			else
			{
				_putchar(32);
			}
		}
		_putchar('\n');
	}
	}

}
