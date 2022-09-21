#include "main.h"
#include <string.h>

/**
 * _puts - This function, prints a string followed by a new line
 * @str: Pointer pointing to the string
 *
 * Return: No return value
 */
void _puts(char *str)
{
	int length = strlen(str);
	int i;

	for (i = 0; i < length; ++i)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
