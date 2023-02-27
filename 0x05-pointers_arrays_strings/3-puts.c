#include "main.h"
/**
 * _puts - this function prints a string
 * @str: the string
 */
void _puts(char *str)
{
	int i;

	for (i = 0 ; *(s + i) != '\0' ; i++)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
