#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	char alpha = 'a';
	int i;
	for (i = 0; i <= 26; ++i)
	{
		putchar(alpha);
		alpha += 1;
	}
	putchar('\n');
	return (0);
}
