#include "main.h"
/**
 * two_the_power_of - calculates two the power of a given number
 * @exp: the exponent
 * Return: the result
 */

unsigned int two_the_power_of(unsigned int exp)
{
	unsigned int result = 1;

	while (exp != 0)
	{
		result *= 2;
		--exp;
	}
	return (result);
}

/**
 * binary_to_uint - converts binary to decimal
 * @b: pointer to a string containing the binary digits
 * Return: the converted number if successful and 0 for failure
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, str_len, decimal = 0;

	if (b == NULL)
		return (0);
	for (i = 0 ; b[i] != '\0' ; i++)
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);
	}
	for (str_len = 0 ; b[str_len] != '\0' ; str_len++)
		;
	i = 0;
	for (i = 0 ; i < str_len ; i++)
	{
		decimal += ((b[i] - '0') * two_the_power_of((str_len - 1) - i));
	}
	return (decimal);
}
