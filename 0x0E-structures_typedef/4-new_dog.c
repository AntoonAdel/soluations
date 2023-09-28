#include "dog.h"
#include <stdlib.h>

/**
  * _strlen - returns the length of a string
  * @s: string to evaluate
  * Return: the length of the string
  */

int _strlen(char *s)
{
	int l;

	l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	return (l);
}

/**
  * *_strcopy - copies the string pointed to by src
  * @final: pointer to the buffer in which we copy the string
  * @src: string to be copied
  * Return: the pointer to dest
  */

char *_strcopy(char *final, char *src)
{
	int l, a;

	l = 0;

	while (src[l] != '\0')
	{
		l++;
	}

	for (a = 0; a < l; a++)
	{
		final[a] = src[a];
	}
	final[a] = '\0';

	return (final);
}

/**
  * new_dog - creates a new dog
  * @name: name of the dog
  * @age: age of the dog
  * @owner: owner of the dog
  * Return: pointer to the new dog (Success), NULL otherwise
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len_name, len_owner;

	len_name = _strlen(name);
	len_owner = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len_name + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (len_owner + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	_strcopy(dog->name, name);
	dog->age = age;
	_strcopy(dog->owner, owner);

	return (dog);
}
