#include "main.h"


/**
 * _strlen_recursion - This function, finds the length of
 * a string using a recursive function
 * @s: String to be evaluated
 *
 * Return: returns 1 on success
 */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
