#include "main.h"


/**
 * swap_int - This function swaps the vale of two integers
 * @n: First pointer
 * @p: second pointer
 * Return: No return value
 */
void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;
	*b = n;
}
