#include <stdio.h>
#include "main.h"

/**
 * main - Entry point, where are program starts executing from
 *
 * Return: Always 0
 */
int main(void)
{
	print_putchar();
	return (0);
}
/**
 * print_putchar - Prints _putchar
 *
 * Return: Always 0 (Success)
 */
void print_putchar(void)
{
	putchar('_');
	putchar('p');
	putchar('u');
	putchar('t');
	putchar('c');
	putchar('h');
	putchar('a');
	putchar('r');
	putchar('\n');
}
