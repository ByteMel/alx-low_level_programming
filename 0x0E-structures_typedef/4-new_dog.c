#include "dog.h"
#include <stdlib.h>
#include "1-strdup.c"


/**
 *new_dog - Pointer to the struct dog_t
 *@name: Pointer to the name of the dog
 *@age: The age of the dog
 *@owner: Pointer to the name of the owner of the dog
 *Return: A Pointer to the struct dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = _strdup(name);
	dog->age = age;
	dog->owner = _strdup(owner);

	return (dog);
}
