#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print dog structure
 * @d: the dog structure
 * Return: nothing
 */
void print_dog(struct dog *d);

int main(void)
{
    struct dog my_dog;

    my_dog.name = NULL;
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}

void print_dog(struct dog *d)
{
if (d)
{
if (d->name)
{
printf("Name: %s\n", d->name);
}
else
{
printf("Name: (nil)\n");
}
if (d->age)
{
printf("Age: %f\n", d->age);
}
else
{
printf("Age: (nil)\n");
}
if (d->owner)
{
printf("Owner: %s\n", d->owner);
}
else
{
printf("Owner: (nil)\n");
}
}
}
