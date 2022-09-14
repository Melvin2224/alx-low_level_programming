#include "main.h"


/**
 * _abs - this function, returns the non-negative
 * value of a number ie the absolute value
 * @num: first operrand
 *
 * Return: depends on condition
 */
int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}
	return (0);
}
