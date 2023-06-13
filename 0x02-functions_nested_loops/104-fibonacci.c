#include <stdio.h>
/**
 * main - prints fibonacci sequence
 * Return: Alway 0 (Success)
 */
int main(void)
{
	unsigned long int a = 1, b = 2, c, a1, b1;
	unsigned long int i, t, t1, need_separating = 1, not_separated =1;

	printf("%lu, %lu", a, b);

	for (i = 0 ; i < 96 ; i++)
	{
		if (need_separating == 1)
		{
			c = a + b;
			printf(", %lu", c);
			a = b;
			b = c;
			if (b > 1000000000)
				need_separating = 0;
		}
		else
		{
			if (not_separated == 1)
			{
				a1 = a % 1000000000;
				b1 = b % 1000000000;
				a = a / 1000000000;
				b = b / 1000000000;
				not_separated = 0;
			}
			t1 = a1 + b1;
			t = a + b + (t1 / 1000000000);
			printf(", %lu", t);
			printf("%lu", t1 % 1000000000);
			a = b;
			b = t;
			a1 = b1;
			b1 = t1 % 1000000000;
		}
	}
	printf("\n");
	return (0);
}
