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
		for (i = 0; i < size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
	else if (i == 0 || i < 0)
	{
		_putchar('\n');
	}
}
