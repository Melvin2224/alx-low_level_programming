#include "main.h"
#include <string.h>


/**
 * puts2 - Prints every other character of a string
 * @str: pointer that points to the string
 *
 * Return: No value
 */
void puts2(char *str)
{
	int length = strlen(str);
	int i;

	for (i = 0; i < length; ++i)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
