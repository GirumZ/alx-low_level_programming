#include "main.h"
/**
 * print_number - prints an integer
 * @n: the integer to be printed
 */

void print_number(int n)
{
	if (n >= 0 && n >= 9)
		_putchar(n + 48);
	else if (n > 9)
	{
		print_number(n / 10);
		_putchar((n % 10) + 48);
	}
	else if (n < 0)
	{
		_putchar('-');
		if (n < -9)
		{
			print_number(n / -10);
			_putchar(48 - n % 10);
		}
	}
}
