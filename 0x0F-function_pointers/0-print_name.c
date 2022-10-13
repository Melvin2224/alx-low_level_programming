#include "function_pointers.h"
#include <stdlib.h>
#include"stdlib.h"


/**
 * print_name - This function prints out the name
 * @name: name to be printed
 * @f: pointer to function
 *
 * Return: no return type
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
		(*f)(name);
}
