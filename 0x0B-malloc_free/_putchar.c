#include <unistd.h>

/**
 * _putchar - Prints character to stdout
 * @c: character to be printed
 *
 * Return: on sucess 1, on error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
