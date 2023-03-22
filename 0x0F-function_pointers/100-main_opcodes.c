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
	int n;
	char *fn;

	if (argc != 2)
	{
		printf("Error");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error");
		return (2);
	}
	fn = (char *)main;
	for (; n > 0; n--, fn++)
	{
		printf("%02x", *fn & 0xff);
		if (n != 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
