#include "main.h"
#include <string.h>

/**
 * _strcat - This function takes two strings as arguments and
 * concatenates them
 * @dest: pointer pointing to first string
 * @src: pointer pointing to second string
 *
 * Return: Returns the pointer dest;
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; ++i)
	{
		dest[dest_len] = src[i];
		dest_len += 1;
	}
	return (dest);
}
