#include "main.h"
#include <stdio.h>


/**
 * print_array - This function prints the elemts of an array
 * @a: Array to be iterated
 * @n: determines number of iterations
 * Return: None
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		if (i != n - 1)
		{
			printf("%d, ", *(a + i));
		}
		else
		{
			printf("%d", *(a + i));
		}
	}
	printf("\n");
}
