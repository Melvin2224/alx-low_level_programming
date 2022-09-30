#include <unistd.h>


/**
 * _putchar - writes character c to stdout
 * @c: character to be written
 *
 * Return: On success 0, on error 1
 */
int _putchar.c(char c)
{
	return (write(1, &c, 1));
}
