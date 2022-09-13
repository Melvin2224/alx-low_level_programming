#include <stdio.h>
#include "main.h"

/**
 * main - print output of print_alphabet_x10()
 *
 * Return: Always 0;
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}
/**
 * print_alphabet_x10 - this function will display the alphabets a-z throug 10 lines
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i = 0, j;
	while (i < 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			putchar(j);
		}
		putchar('\n');
		i++;
	}
}
