#include "main.h"

/**
 * string_toupper - Changes lowercase character to uppercase.
 * @s1: string to be changed
 *
 * Return: s1
 */
char *string_toupper(char *s1)
{
	int i;

	for (i = 0 ; s1[i] != '\0' ; i++)
	{
		if (s1[i] >= 97 && s1[i] <= 122)
		{
			s1[i] = (s1[i]) - 32;
		}
	}
	return (s1);
}
