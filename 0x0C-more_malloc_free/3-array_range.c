#include "main.h"
/**
 * array_range - creates an array for a given range
 * @min: the start of the array
 * @max: the end of the array
 *
 * Return: pointer to the new array if success and NULL if failure
 */

int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; i <= (max - min) ; i++)
		ptr[i] = min + i;
	return (ptr);
}
