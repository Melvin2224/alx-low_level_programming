#include "main.h"


/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source string
 * @n: number of charactyers of source string to be copied
 *
 * Return: Dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; ++i)
	{
		dest[i] = src[i];
	}
	return (dest);
}
