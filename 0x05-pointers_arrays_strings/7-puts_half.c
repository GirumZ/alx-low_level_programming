#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: the string
 */
void puts_half(char *str)
{
	int i;
	int n;

	for (i = 0 ; *(str + i) != '\0' ; i++)
	{
	}
	for (n = (i / 2) ; n > i ; n++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
