#include "main.h"


/**
 * factorial - Finds the factorial of a number
 * @n: number to be evaluated
 *
 * Return: on success n!, on error -1
 * if n <= 1 it returns 1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	else
		return n * factorial(n - 1);
}
