#include "main.h"
#include <string.h>


/**
 * rev_string - This function takes a string argument and reverses the string
 * @s: pointer that points to the string
 *
 * Return: No return value
 */
void rev_string(char *s)
{
	int length = strlen(s);
	int i;
	int j;

	for (j = 0; j < length; ++j)
	{
		_putchar(*(s + j));
	}
	_putchar('\n');
	for (i = length; i >= 0; --i)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
