#include "dog.h"
#include <stdlib.h>
/**
  * init_dog - initialize a dog
  * @d: the dog
  * @name: dog's name
  * @age: dog's age
  * @owner: owner's name
  * Return: void.
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
