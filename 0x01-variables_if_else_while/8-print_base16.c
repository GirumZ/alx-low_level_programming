#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * This program prints the single digits of base 16
 * Return: Always 0(Success)
 */
int main(void)
{
	int i;
	char ch;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar('0' + i);
	}

	for (ch = 'a' ; ch <= 'f' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
