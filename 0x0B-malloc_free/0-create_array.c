#include "main.h"
#include <stdlib.h>

/**
 * create_array -This function creates an array and initalises
 * it with a single character
 * @size: size of the array
 * @c: character to initialise array with
 *
 * Return: on success pointer to array, on error NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size != 0)
	{
		char *ptr = malloc(sizeof(char) * size);

		if (ptr != NULL)
		{
			for (i = 0; i < size; i++)
				ptr[i] = c;
			return (ptr);
		}
	}
	else if (size == 0)
		return (NULL);
	return (0);
}
