#include "main.h"
/**
 * _isupper - check for uppercase
 * @c: c is the character to be checked
 *
 * Return: 0 when uppercase and 1 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
