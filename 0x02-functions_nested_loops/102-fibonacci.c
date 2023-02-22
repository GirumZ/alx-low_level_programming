#include <stdio.h>
/**
 * main - prints fibonacci sequence
 * Return: Alway 0 (Success)
 */
int main(void)
{
	int x = 0;
	int y = 1, z = 2;

	while (x < 50)
	{
		if (x == 0)
			printf("%u", y);
		else if (x == 1)
			printf(", %u", z);
		else
		{
			z += y;
			y = z - y;
			printf(", %u", z);
		}
		++x;
	}
	printf("\n");
	return (0);
}
