#include "main.h"


/**
 * print_most_numbers - This function prints the nubers 0-9 except 2/4
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
	}
}
