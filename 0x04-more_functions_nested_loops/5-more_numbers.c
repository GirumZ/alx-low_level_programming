#include "main.h"
/**
 * more_numbers - prints from 0 to 14
 */

void more_numbers(void)
{
	int i;
	int n;

	for (i = 0 ; i < 10 ; i++)
	{
		for (n = 0 ; n <= 14 ; n++)
		{
		if (n > 9)
		{
		_putchar((n / 10) + '0');
		}
	_putchar((n % 10) + '0');
		}
	_putchar('\n');
	}
}
