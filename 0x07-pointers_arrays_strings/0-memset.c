#include "main.h"


/**
 * _memset - Replaces n numbers of a string with a specified
 * constant byte
 * @s: pointer pointing to string to be replaced
 * @b: byte used to replace part of string
 * @n: an unsigned int value which determines the number of bytes
 * in the string to be replaced
 *
 * Return: pointer s
 */
char _memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
