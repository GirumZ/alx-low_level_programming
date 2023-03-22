#include "function_pointers.h"
/**
 * int_index - searches for an intiger
 * @array: array to be searched
 * @size: size of the array to be searched
 * @cmp: the function used to search the array
 *
 * Return: index of the array where the search is successful
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size > 0)
	{
		int i;

		for (i = 0 ; i < size ; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
