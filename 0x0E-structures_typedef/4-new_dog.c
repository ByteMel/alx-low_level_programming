#include <stdlib.h>
#include "dog.h"
#include "2-strlen.c"
#include "9-strcpy.c"

/**
 * new_dog - creates a new dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: A new dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bosco;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	bosco = malloc(sizeof(dog_t));

	if (bosco == NULL)
		return (NULL);

	bosco->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (bosco->name == NULL)
	{
		free(bosco);
		return (NULL);
	}

	bosco->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (bosco->owner == NULL)
	{
		free(bosco->name);
		free(bosco);
		return (NULL);
	}

	bosco->name = _strcpy(bosco->name, name);
	bosco->age = age;
	bosco->owner = _strcpy(bosco->owner, owner);

	return (bosco);
}
