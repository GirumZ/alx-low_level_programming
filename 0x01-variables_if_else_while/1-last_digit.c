#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * This program is to print the last digit of a number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = abs(n) % 10;
	if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	if (last_digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	else if (6 > last_digit && 0 < last_digit)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	return (0);
}
