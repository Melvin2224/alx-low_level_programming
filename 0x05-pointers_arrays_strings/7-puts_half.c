#include "main.h"
#include <string.h>


/**
 * puts_half - prints the second half of a string if total
 * characters is even and prints the n charcters if odd
 * @str: pointer that points to a string
 * Return: NO return value
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int half;
	int i, j;

	if (length % 2 == 0)
	{
		half = length / 2;
		for (i = 0; i < length; ++i)
		{
			if (i >= half)
			{
				_putchar(str[i]);
			}
		}
	}
	else if (length % 2 != 0)
	{
		half = (length - 1) / 2;
		for (j = 0; j < length; ++j)
		{
			if (j > half)
			{
				_putchar(str[j]);
			}
		}
	}
	_putchar('\n');
}
