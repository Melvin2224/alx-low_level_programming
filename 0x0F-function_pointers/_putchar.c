#include <unistd.h>

/**
 * _putchar - prints character c to stdout
 * @c: character to be printed
 *
 * Return: on success 1, on erro -1
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
