#include "dog.h"
#include <stdio.h>
/**
 * _strlen - computes the length of a string
 * @s: the string that needs to be computed
 * Return: the sting's length
 */

int _strlen(char *s)
{
int i;
for (i = 0; *s != '\0'; s++)
{
++i;
}
return (i);
}


/**
 * _strcpy - copy a string
 * @dest: the destination
 * @src: the source
 * Return: pointer to the dest
 */

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; *src != '\0'; src++)
{
dest[i] = *src;
i++;
}
dest[i] = *src;
return (dest);
}

/**
 * new_dog - creates a new dog structure
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 * Return: the structure if success
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *n_dog;
if (name == NULL || age < 0 || owner == NULL)
return (NULL);
n_dog = malloc(sizeof(dog_t));
if (n_dog == NULL)
return (NULL);
n_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (n_dog->name == NULL)
{
free(n_dog);
return (NULL);
}
n_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (n_dog->owner == NULL)
{
free(n_dog);
return (NULL);
}
n_dog->name = _strcpy(n_dog->name, name);
n_dog->owner = _strcpy(n_dog->owner, owner);
n_dog->age = age;
return (n_dog);
}
