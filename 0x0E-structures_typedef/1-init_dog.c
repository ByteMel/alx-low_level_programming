#include "dog.h"

/**
 *init_dog - a function that initialize a variable of type struct dog
 *@d: Pointer to the variable being initialized
 *@name: Pointer that contains the dog's name
 *@age: Pointer that represents the dog's age
 *@owner: Pointer that contains the dog's owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
