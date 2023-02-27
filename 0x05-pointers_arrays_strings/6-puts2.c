#include "main.h"
/**
 * puts2 - this function pribts every other character
 * @str: the string
 */
void puts2(char *str)
{
	int i;

	for (i = 0 ; *(str + i) != '\0' ; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}

