#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - This function sums all its arguments
 * @n: number of arguments passed
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int i;
	int sum;

	if (n == 0)
		return (0);
	va_list ap;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
