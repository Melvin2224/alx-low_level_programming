#include <unistd.h>


/**
 * _putchar - writes character c to stdout
 * @c: Character to print
 *
 * Return: on success 1
 * on erro -1 is returned and errno is set appropraiteky
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
