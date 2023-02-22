#include <stdio.h>
/**
 * main - prints fibonacci sequence
 * Return: Always 0 (success)
 */
int main(void)
{
	int n1 = 1;
	int n2 = 2;
	int n3 = n1 + n2;
	int i;

	printf("%u, %u, ", n1, n2);
	for (i = 0 ; i <= 48 ; i++)
	{
		printf("%u, ", n3);
		n1 = n2;
		n2 = n3;
		n3 = n1 + n2;
	}
	return (0);
}


