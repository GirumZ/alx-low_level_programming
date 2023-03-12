#include "main.h"
/**
 * rot13 - encodes with rot13
 * @s: the string to be encoded
 * Return: the encoded string
 */
char *rot13(char *s)
{
	int i, j;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char change[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; j <= 52 ; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = change[j];
				break;
			}
		}
	}
	return (s);
}
