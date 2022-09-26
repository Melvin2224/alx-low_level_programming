#include "main.h"


/**
 * _memcpy - Copys a part of a string into another string
 * @dest: pointer pointing to destination string
 * @src: pointer pointing to source string
 * @n: value which determines what amount of sorce string
 * will be copied
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
