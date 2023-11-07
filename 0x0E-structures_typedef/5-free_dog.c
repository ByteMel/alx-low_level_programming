#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a dog
 * @d: pointer to the dog
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
