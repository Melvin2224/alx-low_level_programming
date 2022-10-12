#include "function_pointers.h"

/**
 * array_iterator - loops through an array and passes each element
 * of the array to a function
 * @array: array name
 * @size: array size
 * @action: pointer to second function
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
