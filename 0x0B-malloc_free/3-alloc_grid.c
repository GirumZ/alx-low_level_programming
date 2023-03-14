#include "main.h"
/**
 * alloc_grid - allocates grid for two dimentional array
 * @width: width of the array
 * @height: height of the array
 *
 * Return: returns the new array if successful and NULL if failur
 */

int **alloc_grid(int width, int height)
{
	int k, i;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (k = 0 ; k < height ; k++)
	{
		array[k] = malloc(sizeof(int) * width);
		if (array[k] == NULL)
		{
			for (k-- ; k >= 0 ; k--)
				free(array[k]);
			free(array);
			return (NULL);
		}
	}
	for (k = 0 ; k < height ; k++)
		for (i = 0 ; i < width ; i++)
			array[k][i] = 0;
	return (array);
}
