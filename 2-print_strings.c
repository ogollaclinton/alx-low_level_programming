#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Print string
 * followed by a new line
 * @separator: string printed between characters
 * @n: number of integers passed to a function
 * @...: variable arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s;
	char *f;
	unsigned int i;

	va_start(s, n);

	for (i = 0; i < n; i++)
	{
		f = va_arg(s, char *);

		if (f == NULL)
			printf("(nil)");
		else
			printf("%s", f);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(s);
}
