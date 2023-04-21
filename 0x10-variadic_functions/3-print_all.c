#include "variadic_functions.h"

/**
 * print_all - prints output depending of the format specified
 * @format: the format specified
 * Return: void
 */

void print_all(const char * const format, ...)
{
	char specifier[4] = {'c', 'i', 'f', 's'};
	size_t i, j;
	char *separator = "";
	va_list args;
	fn_list print_fns[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_start(args, format);
	i = 0;
	while (i < strlen(format))
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == specifier[j])
			{
				printf("%s", separator);
				print_fns[j].func(args);
				separator = ",";
			}
			j++;
		}
		i++;
	}
	printf("\n");
}


/**
 * print_char - prints character
 * @args: argument to be printed
 * Return: NULL
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints integer
 * @args: argument to be printed
 * Return: void
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_float - prints float
 * @args: argument to be printed
 * Return: void
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_string - prints strings
 * @args: the argument to be printed
 * Return: void
 */

void print_string(va_list args)
{
	char *string;

	string = va_arg(args, char *);
	if (string == NULL)
		string = "(nil)";
	printf("%s", string);
}
