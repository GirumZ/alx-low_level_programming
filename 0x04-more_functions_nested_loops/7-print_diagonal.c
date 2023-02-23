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

	for (i = 0 ; i < n ; i++)
	{
		if (n > 0)
		{
			for (j = 0 ; j < n ; j++)
			{
				if (j == i)
				{
					_putchar(92);
				}
				else if (j > i)
				{
					break;
				}
				else
				{
					_putchar(32);
				}
			}
		}
		_putchar('\n');
	}
}
