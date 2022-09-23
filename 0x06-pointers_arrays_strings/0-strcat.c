#include "main.h"


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
	int dest_length = strlen(dest);
	int i;

	for (i = 0; i src[i] != '\0'; ++i)
	{
		dest[dest_length + i] = src[i];
	}
	dest[dest_length + i] = '\0';
	return (dest);
}
