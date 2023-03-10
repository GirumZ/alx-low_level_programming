#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the sum of postive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1 ; i < argc ; i++)
	{
		if (argc == 1)
			printf("%d\n", sum);
		else if (argv[i] != 0 && atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else if (atoi(argv[i]) < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
