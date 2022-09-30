#include <stdio.h>
#include <stdlib.h>

/**
 * main - finds the multiplication of two arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	int first, second, result;

	if (argc > 1)
	{
		first = atoi(argv[1]);
		second = atoi(argv[2]);
		result = first * second;
		printf("%d\n", result);
	}
	return (0);
}
