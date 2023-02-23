#include "main.h"
/**
 * print_most_numbers - this will print from 0 to 9 except 2 and 4
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48 ; i < 58 ; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
