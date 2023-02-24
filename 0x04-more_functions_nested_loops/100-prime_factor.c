#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	long int i;
	long int maxfac;
	long int num = 612852475143;
	double square = sqrt(num);

	for (i = 1 ; i <= square ; i++)
	{
		if (num % i == 0)
		{
			maxfac = num / i;
		}
	}
	printf("%ld\n", maxfac);
	return (0);
}
