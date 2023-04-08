#include "main.h"
#include <string.h>

int checker(char *sp, int first_index, int last_index);

/**
 * is_palindrome - checkes if a string is palindrome or not
 * @s: the string to be checked
 * Return: 1 if string is palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int i, len;

	i = 0;
	len = strlen(s) - 1;
	return (checker(s, i, len));
}

/**
 * checker - checkes if simmetric characters of a string are the same or not
 * @sp: the string
 * @first_index: current first index
 * @last_index: current last index
 *
 * Return: 1 if characters are the same and 0 if not
 */

int checker(char *sp, int first_index, int last_index)
{
	if (first_index >= last_index)
		return (1);
	if (sp[first_index] == sp[last_index])
	{
		first_index++;
		last_index--;
		return (checker(sp, first_index, last_index));
	}
	return (0);
}
