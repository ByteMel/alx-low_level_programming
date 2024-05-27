#ifndef DOG_H
#define DOG_H

/**
 * struct dog - The Structure
 *@name: The name of the dog
 *@age: The age of the dog
 *@owner: The owner of the dog
 *
 *Description: This is a structure that stores information about a dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
int _strlen(char *s);
int _strlen(char *s);
void free_dog(dog_t *d);

#endif
