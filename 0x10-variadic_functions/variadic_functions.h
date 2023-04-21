#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * struct function_list - list of functions
 * @specifier: format specifiers
 * @func: function associated with a specifier
 */

typedef struct function_list
{
	char *specifier;
	void (*func)(va_list args);
} fn_list;

void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTION_H */
