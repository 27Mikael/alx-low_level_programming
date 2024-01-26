#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers and a separator
 * @separator: string to be printed between numbers (if not NULL)
 * @n: the number of int passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (!separator || i == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
	}

	va_end(list);

	printf("\n");
}

