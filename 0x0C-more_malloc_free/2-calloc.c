#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory to nmeb of array and
 * returns a pointer to the allocated memory, also sets
 * memory to zero
 * @nmemb: number of elements to be in the array
 * @size: the size of each elemet
 *
 * Return: on success pointer to allocated memory,
 * on erro NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);

	void *ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
