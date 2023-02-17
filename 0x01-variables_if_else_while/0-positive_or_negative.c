#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * This program is to print a random number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is postive\n", n);
	return (0);
}
