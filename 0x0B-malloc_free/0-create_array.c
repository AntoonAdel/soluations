#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - creates an array of chars
  * @size: size of array
  * @c: character to initialize with
  * Return: pointer
  */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *array = malloc(size * sizeof(char));

	if (size == 0 || array == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
	{
		array[a] = c;
	}
	return (array);
}
