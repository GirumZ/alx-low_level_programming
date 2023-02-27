#include "main.h"
/**
 * print_rev - prints the reverse of a string
 * @s: the string
 */
void print_rev(char *s)
{
	int i;
	int n;

	for (i = 0 ; *(s + i) != '\0' ; i++)
	{
	}
	for (n = --i ; n >= 0 ; --n)
	{
		_putchar(*(s + n));
	}
	_putchar('\n');
}
