#include <stdio.h>

/**
 * main - Fizbuzz
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	char first[] = "Fizz";
	char third[] = "FizzBuzz";
	char second[] = "Buzz";

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s ", third);
		}
		else if (i % 3 == 0)
		{
			printf("%s ", first);
		}
		else if (i % 5 == 0)
		{
			printf("%s ", second);
		}
		else
		{
			printf("%i ", i);
		}
	}
	printf("\n");
	return (0);
}
