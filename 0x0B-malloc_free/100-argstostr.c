#include "main.h"
/**
 * argstostr - concatenates all the arguments
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: the cocatinated array
 */

char *argstostr(int ac, char **av)
{
	char *p;
	int k, i, j, r;

	if (ac == 0)
		return (NULL);

	for (k = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			k++;
		k++;
	}

	p = malloc((k + 1) * sizeof(char));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = j = r = 0; r < k; j++, r++)
	{
		if (av[i][j] == '\0')
		{
			p[r] = '\n';
			i++;
			r++;
			j = 0;
		}
		if (r < k - 1)
			p[r] = av[i][j];
	}
	p[r] = '\0';

	return (p);
}
