#include <stdio.h>
/**
 * main - prints fibonacci sequence
 * Return: Alway 0 (Success)
 */
int main(void)
{
	long long int x = 0;
	long long int y = 1, z = 2;

	while (x < 50)
	{
		if (x == 0)
			printf("%lld", y);
		else if (x == 1)
			printf(", %lld", z);
		else
		{
			z += y;
			y = z - y;
			printf(", %lld", z);
		}
		++x;
	}
	printf("\n");
	return (0);
}
