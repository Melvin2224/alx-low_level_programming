#include <stdio.h>
#include "main.h"


/**
 * print_alphabet - will display alphabet a-z in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha < 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
}


/**
 * main - Entry point for the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
