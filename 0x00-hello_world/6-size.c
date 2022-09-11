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
	long int aunsigned;
	long long int along;
	float afloat;

	printf("Size of char: %zu byte(s)", sizeof(character));
	printf("\nSize of int: %zu byte(s)", sizeof(integer));
	printf("\nSize of long int: %zu byte(s)", sizeof(aunsigned));
	printf("\nSize of long long int: %zu byte(s)", sizeof(along));
	printf("\nSize of float: %zu byte(s)\n", sizeof(afloat));
	return (0);
}
