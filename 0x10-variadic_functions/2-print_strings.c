#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - This function prints a string
 * @separator: string to appear after each string
 * @n: number of strings to be passed to the function
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;

	va_start(strings, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (n == '\0')
			{
				printf("(nil)");
			}
			else if (n == 1 || n - i == 1)
			{
				printf("%s", va_arg(strings, char *));
			}
			else
				printf("%s%s", va_arg(strings, char *), separator);
		}
		printf("\n");
		va_end(strings);
	}
	else if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%s", va_arg(strings, char *));
		}
		printf("\n");
		va_end(strings);
	}
}
