#include "variadic_functions.h"
#include <stdarg.h>
/**
  * sum_them_all - Return sum of all its parameters
  * @n: number of parameters
  * @...: any vaariable no. of arguments
  * Return: 0 or sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list t;
	unsigned int i, sum = 0;

	va_start(t, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(t, int);
	}
	va_end(t);
	return (sum);
}
