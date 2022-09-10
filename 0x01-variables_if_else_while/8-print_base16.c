#include <stdio.h>

/**
 * main - Entr point
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int num;
	char alpha;

	for (num = 0; num < 10; ++num)
	{
		putchar(num + '0');
	}
	for (alpha = 'a'; alpha < 'g'; ++alpha)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
