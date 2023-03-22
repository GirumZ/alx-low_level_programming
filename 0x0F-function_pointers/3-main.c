#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - computes 5 types of mathmatical oprations on integers
 * @argc: number of arguments in argv
 * @argv: array of arguments
 *
 * Return: Success (0)
 */

int main(int argc, char *argv[])
{
	int num1, num2, (*fn)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (num2 == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	fn = get_op_func(argv[2]);
	if (fn == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", fn(num1, num2));
	return (0);
}
