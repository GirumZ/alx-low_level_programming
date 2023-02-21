#include <stdio.h>
#include "main.h"
/**
 * _isalpha - is a function to check for alphabet
 * @c: is the character being checked
 *
 * Return: 1 if it is alphabet.
 * or 0 if not
 */
int _isalpha(int c)
{
	while (c >= 65 && c <= 122)
	{
		if (c >= 91 && c <= 96)
		{
			break;
		}
		return (1);
	}
	return (0);
}
