#include "main.h"


/**
 * print_line - This function prints a line
 * @n: First operrand that determines the length of the line
 *
 * Return: Always 0
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
}
