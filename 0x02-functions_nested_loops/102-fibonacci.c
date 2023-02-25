#include <stdio.h>
/**
 * main - prints fibonacci sequence
 * Return: Alway 0 (Success)
 */
int main(void)
{
	long int x = 0;
	long int y = 1, z = 2;

	while (x < 50)
	{
		if (x == 0)
			printf("%ld", y);
		else if (x == 1)
			printf(", %ld", z);
		else
		{
			z += y;
			y = z - y;
			printf(", %ld", z);
		}
		++x;
	}
	printf("\n");
	return (0);
}
