#include "main.h"
#include <stdio.h>


/**
 * print_sign - This function displays the sign of a number
 * if the number is greater than 0, it displays +, if it is zero,
 * it displays 0 and if it is less than 0, it displays -.
 *
 * Return: What it return depends on ie if number is greater than
 * zero, it returns 1, if it is equal to zero, it returns 0, if
 * it is less than zero, it return -1
 */
int print_sign(int n)
{
	int i = -1;

	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar(n + '0');
		return (0);
	}
	else if (n < 0)
	{
		putchar('-');
		return (i);
	}
}
