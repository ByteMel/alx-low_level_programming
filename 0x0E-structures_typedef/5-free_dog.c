#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - Frees the unused memory
 *@d: Pointer to the struct dog_t
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
