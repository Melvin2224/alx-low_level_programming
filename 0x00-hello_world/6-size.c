#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void) 
{
	int total_int, total_unsigned_int, total_long_int;
	char total_char;
	float total_float;

	total_int = sizeof(int);
	total_char = sizeof(char);
	total_long_int = sizeof(long int);
	total_unsigned_int = sizeof(unsigned int);
	total_float = sizeof(float);
	printf("Size of char: %i byte(s)", total_char);                                                                               
	printf("\nSize of int: %i byte(s)", total_int);                                                                               
	printf("\nSize of long int: %i byte(s)", total_unsigned_int);                                                                 
	printf("\nSize of long long int: %i byte(s)", total_long_int);
	printf("\nSize of float: %g byte(s)", total_float);
	return (0);
}
