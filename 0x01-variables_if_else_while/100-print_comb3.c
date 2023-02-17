#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * This program prints the combination of two digit numbers
 * Return: Always 0(Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 0 ; a < 10 ; a++)
	{
		for (b = a + 1 ; b < 10 ; b++)
		{
			putchar('0' + a);
			putchar('0' + b);
			if (a != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
