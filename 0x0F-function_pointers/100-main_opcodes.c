#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcode
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	unsigned char *code = (unsigned char *)main;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	printf("%02x", code[0]);
	for (i = 1; i < (atoi(argv[1])) ; i++)
		printf(" %02x", code[i]);
	printf("\n");
	exit(EXIT_SUCCESS);
}
