#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Print numbers
 * followedby a new line
 * @separator: string printed between characters
 * @n: number of integers passed to a function
 * @...: variable arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list t;
	unsigned int i;

	va_start(t, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(t, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(t);
}
