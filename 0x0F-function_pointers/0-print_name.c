#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: the name to be printed
 * @f: pointer to a callback function)
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);
}
