#include "main.h"
/**
 * print_line - prints a line
 * @n: is the length of the line
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0 ; i <= n ; i++)
	{
		if (n > 0)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
