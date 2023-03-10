#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the multiple of two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int mult;

	if (argc == 3 && argv[1] != 0 && atoi(argv[1]) == 0)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 3 && argv[2] != 0 && atoi(argv[2]) == 0)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 3)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	return (0);
}
