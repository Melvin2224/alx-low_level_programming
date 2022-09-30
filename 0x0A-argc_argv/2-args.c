#include <stdio.h>

/**
 * main - prints out all arguments it received
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 If successful
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
