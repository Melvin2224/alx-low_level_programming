#include "main.h"
#include <string.h>

/**
 * _strncat - Acceps two string arguments and concatenantes from the value
 * of the second one up to n to the first one
 * @dest: first pointer pointing to first string
 * @src: second pointer pointing to second string
 * @n: Determines how much of second string will be concatenated with first
 * string
 *
 * Return: pointer dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; ++i)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
