#include "main.h"

/**
 * _pow_recursion - This function computes the value of an
 * integer raised to the power of another integer using recursion
 * @x: Int to be evaluated
 * @y: Second int to be evaluated
 *
 * Return: returns the result on success
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
