#include "search_algos.h"

/**
 * jump_search - lookes for a value using the jump search algorithm
 * @array: the array being searched
 * @size: tha size of the array
 * @value: the value we are looking for
 *
 * Return: the index the vlaue is found at or -1 on failure
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, j;
	size_t jump = sqrt(size);

	if (array == NULL)
		return (-1);
	if (array[0] > value)
		return (-1);

	for (i = 0; i < size; i += jump)
	{
		if (array[i] >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", (i - jump), (i));
			for (j = (i - jump); j < (i + jump + 1); j++)
			{
				printf("Value checked array[%lu] = [%d]", j, array[j]);
				printf("\n");
				if (array[j] == value)
					return (j);
			}
		}
		else
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (i == size - 1)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", (i), (i + jump));
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		}

	}
	return (-1);
}
