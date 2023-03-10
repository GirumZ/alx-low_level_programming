#include "main.h"
/**
 * _strpbrk -  searches a string for any of a set of bytes
 * @s: the first string
 * @accept: the second string
 *
 * Return: a pointer to the first occerence
 */

char *_strpbrk(char *s, char *accept)
{
	char *temp;

	while (*s != '\0')
	{
		temp = accept;
		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				return (s);
			}
			temp++;
		}
		s++;
	}
	return (NULL);
}
