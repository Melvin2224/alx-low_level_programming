#include "main.h"

/**
 * _isalpha - This function checks if the variable c
 * is a letter, in uppercase or in lowercase
 * @c: First operand
 *
 * Return: if successful 1, if not 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
