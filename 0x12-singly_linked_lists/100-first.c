#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * before_main - This function executes before the main function
 *
 * Return: void
 */
void before_main(void) __attribute__((constructor));
void before_main(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
