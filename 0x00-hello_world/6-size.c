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
	long int along_int;
	long long int along;
	float afloat;

	printf("Size of a char: %zu byte(s)", sizeof(character));
	printf("\nSize of an int: %zu byte(s)", sizeof(integer));
	printf("\nSize of a long int: %zu byte(s)", sizeof(along_int));
	printf("\nSize of a long long int: %zu byte(s)", sizeof(along));
	printf("\nSize of a float: %zu byte(s)\n", sizeof(afloat));
	return (0);
}
