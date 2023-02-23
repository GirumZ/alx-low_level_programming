#include "main.h"
/**
 * _isdigit - check for digit
 * @c: c is the character to be checked
 *
 * Return: 0 when uppercase and 1 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
