#include "main.h"
/**
 * print_square - ptints a square
 * @size: the size of the square
 */

void print_square(int size)
{
	int i;
	int n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0 ; i < size ; i++)
		{
			for (n = 0 ; n < size ; n++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
