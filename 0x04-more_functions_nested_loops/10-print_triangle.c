#include "main.h"

/**
 * print_triangle - This function, prints a triangle pattern
 * @size:determines the size of the triangle
 *
 * Return: return 0 if sucessful
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (j = size; j >= i; j--)
		{
			_putchar(' ');
		}
		for (k = 1; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
