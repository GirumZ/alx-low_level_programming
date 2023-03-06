#include "main.h"
/**
 * _strstr -  locates a substring
 * @haystack: the main string
 * @needle: the substring
 *
 * Return: the rest of the string after match else NULL
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *temp1 = haystack;
		char *temp2 = needle;

		while (*haystack && *temp2 && *haystack == *temp2)
		{
			haystack++;
			temp2++;
		}
		if (!*temp2)
		{
			return (temp1);
		}
		haystack = temp1 + 1;
	}
	return (NULL);
}
