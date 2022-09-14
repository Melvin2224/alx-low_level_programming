#include "main.h"

/**
 *  _isalpha(int c) - This function, checks if the value of the
 *  variable c is letter
 *
 *  Return: Always 0
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
