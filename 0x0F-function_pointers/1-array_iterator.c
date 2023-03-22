#include "function_pointers.h"
/**
 * array_iterator - executes a function on every element of an array
 * @array: the array to be iterated
 * @size: size of the array
 * @action: the function to be executedd on an array
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0 ; i < size ; i++)
		{
			action(array[i]);
		}
	}
}
