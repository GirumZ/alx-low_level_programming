#include "main.h"
/**
 * cap_string - capitalizes each word of a string
 * @s: the string to be capitalized
 * Return: s
 */

char *cap_string(char *s)
{
	int i;
	int n;
	int x[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (n = 0 ; x[n] != '\0' ; n++)
		{
			if (s[i] == x[n] && (s[i + 1] >= 97 && s[i + 1] <= 122))
			{
				s[i + 1] -= 32;
			}
			else
				continue;
		}
	}
	return (s);
}
