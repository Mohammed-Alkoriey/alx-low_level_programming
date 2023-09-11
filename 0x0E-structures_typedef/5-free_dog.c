#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - free a dog structur
  * @d: the dog structure
  * Return: nothing
  */
void free_dog(dog_t *d)
{
if (d)
{
free(d->owner);
free(d->name);
free(d);
}
}
