#include "main.h"
#include <stdio.h>


/**
 * _strlen - This function calculates and returns the lengthof a string
 * @s: String pointer t be evaluated
 * Return: Always 0
 */
int _strlen(char *s)
{
	int len = 0;

	while(*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
