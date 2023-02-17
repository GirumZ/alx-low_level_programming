#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * This program prints the combination of two double digit numbers
 * Return: Always 0(Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 0 ; a < 99 ; a++)
	{
		for (b = a + 1 ; b < 100 ; b++)
		{
			putchar('0' + (a / 10));
			putchar('0' + (a % 10));
			putchar(' ');
			putchar('0' + (b / 10));
			putchar('0' + (b % 10));
			if (a == 98 && b == 99)
			{
				continue;
			}
				putchar(',');
				putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
