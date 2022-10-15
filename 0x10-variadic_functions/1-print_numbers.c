#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - this function prints numbers
 * @separator: string to appear after each number
 * @n: number of arguments
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (n == 1 || n - i == 1)
			{
				printf("%d", va_arg(numbers, int));
			}
			else
				printf("%d%s", va_arg(numbers, int), separator);
		}
		printf("\n");
		va_end(numbers);
	}
	else if (separator == NULL)
	{

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(numbers, int));
		}
		printf("\n");
		va_end(numbers);
	}
}
