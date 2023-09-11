#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * struct dog - Dog description
  * @name: dog's name.
  * @age: dog's age
  * @owner: dog's owner.
  *
  * Description: a dog structure
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - a new type for dog struct
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

#endif
