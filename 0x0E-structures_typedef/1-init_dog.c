#include "dog.h"


/**
 * init_dog - creates a dog structure
 * @d: the dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 * Return: nothing
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
