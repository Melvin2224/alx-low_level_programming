#include "main.h"
#include <stddef.h>


/**
 * _strchr - This function checks for a specific character
 * in a string
 * @s: pointer to string to be checked
 * @c: char to be check for
 * Return: returns the memory address of string to be checked
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		return (&s[i]);
	}
	return (0);
}
