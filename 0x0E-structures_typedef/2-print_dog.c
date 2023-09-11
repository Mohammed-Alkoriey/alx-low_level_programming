#include "dog.h"

/**
 * print_dog - print dog structure
 * @d: the dog structure
 * Return: nothing
 */

void print_dog(struct dog *d)
{
if (d)
{
printf("Name: %s\n", (d->name) ? d->name : "(nil)");
printf("Age: %f\n", (d->age) ? d->age : 0);
printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
}
}
