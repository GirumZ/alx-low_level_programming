#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum amount of coin needed to give change
 * @argc: the number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if success or 1 for error
 */

int main(int argc, char *argv[])
{
	int cents, changes;

	changes = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			changes++;
		}
		if (cents < 25 && cents >= 10)
		{
			cents -= 10;
			changes++;
		}
		if (cents < 10 && cents >= 5)
		{
			cents -= 5;
			changes++;
		}
		if (cents < 5 && cents >= 2)
		{
			cents -= 2;
			changes++;
		}
		while (cents < 2 && cents > 0)
		{
			cents -= 1;
			changes++;
		}
	}
	printf("%d\n", changes);
	return (0);
}
