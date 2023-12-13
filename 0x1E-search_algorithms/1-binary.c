#include "search_algos.h"

void pritn_array(int *array, size_t start, size_t end);

/**
 * binary_search - searchs for a value in an array using binary search
 * @array: pointer to the first element of the array
 * @size: the size of the array
 * @value: the value we are looking for
 *
 * Return: the index if the value is found and -1 if not
 */

int binary_search(int *array, size_t size, int value)
{

	size_t start = 0;
	size_t end = size;

	if (array == NULL)
		return (-1);

	while (start < end)
	{
		int checked = (start + end - 1) / 2;

		printf("Searching in array: ");
		print_array(array, start, end);

		if (array[checked] == value)
			return (checked);
		else if (array[checked] > value)
			end = checked;
		else
			start = checked + 1;
	}
	return (-1);

}

/**
 * print_array - prints an array with in the given interval
 * @array: pointer to the array to be printed
 * @start: starting index of the interval
 * @end: ending index ot the interval
 */

void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	for (i = start; i < end; i++)
	{
		printf("%d", array[i]);
		if (i != end - 1)
			printf(", ");
		else
			printf("\n");
	}
}
