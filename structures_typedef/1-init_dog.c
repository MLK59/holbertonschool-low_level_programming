#include "stdio.h"
#include "dog.h"
/**
 * init_dog - initialize a variable of type sruct dog
 * @name: name dog
 * @age: age dog
 * @owner: owner dog
 * @d:variable of struc
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	;
	else
	{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}
}
