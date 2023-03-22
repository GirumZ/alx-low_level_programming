#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcodes of main
 * @argc: number of arguments
 * @argv: array og arguments
 *
 * Return: Success (0), Error (1)
 */
int main(int argc, char *argv[])
{
	short bytes, x;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	printf("%02x", *((unsigned char *) (main)));
	for (x = 1; x < bytes; ++x)
		printf(" %02x", *((unsigned char *) (main + x)));
	putchar('\n');
	exit(EXIT_SUCCESS);
}
