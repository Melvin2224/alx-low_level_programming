#include "main.h"
#include <string.h>


/**
 * print_rev - This function takes a string argument and reverses the string
 * @s: pointer that points to the string;
 *
 * Return: No return value
 */
void print_rev(char *s)
{
	int length = strlen(s);
	int i;

	for (i = length; i >= 0; --i)
	{
		_putchar(s[i]);
	}
}
