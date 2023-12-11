#include "search_algos.h"
/**
 * linear_search - linearly searchs for a value in an array
 * @array: pointer to the first element of the array
 * @size: the size of the array
 * @value: the value we are looking for
 *
 * Return: if value is found the index is returned & -1 is returned otherwise
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]", i, array[i]);
		printf("\n");
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
