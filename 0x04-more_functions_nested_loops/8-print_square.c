#include "main.h"

/**
 * print_square - This funtion prints a square made up of #
 * @size: determines the size of the square
 *
 * Return: Always 0
 */
void print_square(int size)
{
	int i;
	int j;

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
		putchar('\n');
	}
	else if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
}
