#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void) 
{

	printf("Size of char: %li byte(s)", sizeof(char));                                                                               
	printf("\nSize of int: %li byte(s)", sizeof(int));                                                                               
	printf("\nSize of long int: %li byte(s)", sizeof(unsigned int));                                                                 
	printf("\nSize of long long int: %li byte(s)", sizeof(long int));
	printf("\nSize of float: %ld byte(s)\n", sizeof(float));
	return (0);
}
