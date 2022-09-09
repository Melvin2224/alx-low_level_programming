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

	for (i = 0; i < 26; ++i)
	{
		putchar(alpha);
		alpha += 1;
	}

	char alpha2 = 'A';
	int j;

	for (j = 0; j < 26; ++j)
	{
		putchar(alpha1);
		alpha1 += 1;
	}
	putchar('\n');
	return (0);
}
	
