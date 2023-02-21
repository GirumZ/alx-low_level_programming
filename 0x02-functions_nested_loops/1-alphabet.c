#include <stdio.h>
/**
 * print_alphabet - Ptints the alphabet in lowercase
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		_putchar(ch);
	}
	putchar('\n');
}
