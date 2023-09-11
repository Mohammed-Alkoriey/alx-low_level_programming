#include <stdio.h>
#include <stdlib.h>

void init_dog(struct dog *d, char *name, float age, char *owner);

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
if (d != null)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
