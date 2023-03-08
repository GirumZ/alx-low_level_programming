/**
 * test_pal - check for palindrome
 * @first: character to check with end
 * @last: character to check with start
 * Return: Palindrome 1, Not 0
 */
int test_pal(char *first, char *last)
{
	if (first == last)
		return (1);
	if (*first == *last && first + 1 == last)
		return (1);
	if (*first == *last)
		return (test_pal(first + 1, last - 1));
	return (0);
}

/**
 * last - return a pointer at the last character of a string
 * @s: string reach end of
 * Return: pointer to end of string
 */
char *last(char *s)
{
	if (*s)
		return (last(s + 1));
	return (s);
}

/**
 * is_palindrome - check if string is a palindrome
 * @s: string to check
 * Return: True 1, False 0
 */
int is_palindrome(char *s)
{
	return (test_pal(s, last(s) - 1));
}
