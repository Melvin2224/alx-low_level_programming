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
	int j;
	char alpha2;

	for (i = 0; i < 26; ++i)
	{
		putchar(alpha);
		alpha += 1;
	}
	alpha2 = 'A';
	for (j = 0; j < 26; ++j)
	{
		putchar(alpha2);
		alpha2 += 1;
	}
	putchar('\n');
	return (0);
}
