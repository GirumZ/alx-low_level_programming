#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: the string
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int length;

	if (*s == '\0')
	{
		return (0);
	}
	length = _strlen_recursion(s + 1) + 1;
	return (length);
}
