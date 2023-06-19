#include <stdio.h>
#include "main.h"
/**
 * _islower - is a function to check for lowercase
 * @c: is the character being checked
 *
 * Return: 1 if it is lowercase.
 * or 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
