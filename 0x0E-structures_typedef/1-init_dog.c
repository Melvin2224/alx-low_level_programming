#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Thisfunction initialises a variable with
 * the values gotten
 * @d: pointer to variable
 * @name: string value for name of dog
 * @age: float value for age of dog
 * @owner: string value for name of dog owner
 *
 * Description: initialises dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
