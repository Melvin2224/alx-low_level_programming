#include <stdio.h>


/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int integer;
	char character;
	long aunsigned;
	long long along;
	float afloat;

	printf("Size of char: %lu byte(s)", sizeof(character));
	printf("\nSize of int: %lu byte(s)", sizeof(integer));
	printf("\nSize of long int: %lu byte(s)", sizeof(aunsigned));
	printf("\nSize of long long int: %lu byte(s)", sizeof(along));
	printf("\nSize of float: %lu byte(s)\n", sizeof(afloat));
	return (0);
}
