#include "main.h"


/**
 * _islower-This function will check if a variable
 * is in lower case or upper case
 * @c: first operrand
 *
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
