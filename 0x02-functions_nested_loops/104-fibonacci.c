#include <stdio.h>
/**
 * main - prints fibonacci sequence
 * Return: Alway 0 (Success)
 */
int main(void)
{
	unsigned long int x = 0;
	unsigned long int y = 1, z = 2;

	while (x < 98)
	{
		if (x == 0)
			printf("%lu", y);
		else if (x == 1)
			printf(", %lu", z);
		else
		{
			z += y;
			y = z - y;
			printf(", %lu", z);
		}
		++x;
	}
	printf("\n");
	return (0);
}
