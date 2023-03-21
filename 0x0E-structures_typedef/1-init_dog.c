#include <stdio.h>
#include "dog.h"
/**
 * init_dog - functions that intial struct
 * @d: functions
 * @name: name of the dog
 * @age: the dog age
 * @owner: own dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
