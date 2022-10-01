#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds two arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	if (argc <= 1)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) != 0)
			{
				sum += atoi(argv[i]);
			}
			else if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
