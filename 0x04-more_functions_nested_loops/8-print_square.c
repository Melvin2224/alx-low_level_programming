#include "main.h"


/**
 * print_square - this function prints a square using #
 * @size: determines the size of the square
 *
 * Return: 0 Always
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
}
