#include "function_pointers.h"
#include <stdlib.h>


/**
 * int_index - Searches for an integer
 * @array: array name
 * @size: size of the array array
 * @cmp: pointer to function that compares integers
 *
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size ; i++)
	{
		(*cmp)(array[i]);
		if ((*cmp)(array[i]) != 0)
			return (i);
	}
	else
		return (-1);
}
