#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the value of struct dog
 * @d: pointer to variable to be printed
 *
 * Description: this functioin prints the individual
 * value of the members of the structure struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		;
	else if (d->name == NULL)
		printf("Name: (nil)\n");
	else if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
