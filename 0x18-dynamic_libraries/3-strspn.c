#include "main.h"
#include <stdbool.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: the first string
 * @accept: the second string
 *
 * Return: the length
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, len1, len2;
	int tot_len = 0;

	for (len1 = 0 ; s[len1] != '\0' ; len1++)
	{
	}
	for (len2 = 0 ; accept[len2] != '\0' ; len2++)
	{
	}
	for (i = 0 ; i < len1 ; i++)
	{
		bool found_match = false;

		for (j = 0 ; j < len2 ; j++)
		{
			if (accept[j] == s[i])
			{
				found_match = true;
				break;
			}
		}
		if (!found_match)
		{
			break;
		}
		tot_len++;
	}
	return (tot_len);
}
