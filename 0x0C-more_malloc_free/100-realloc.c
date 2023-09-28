#include "main.h"
#include <stdlib.h>

/**
  * *_realloc - reallocates a memory block using malloc and free
  * @ptr: pointer to the memory previsouly allocated by malloc
  * @old_size: size of the allocated memory for ptr
  * @new_size: new size of the new memory block
  * Return: pointer to the newly allocated memory block
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointer;
	char *old_ptr;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (0);
	}

	if (!ptr)
		return (malloc(new_size));

	pointer = malloc(new_size);
	if (!pointer)
		return (0);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			pointer[a] = old_ptr[a];
	}

	if (new_size > old_size)
	{
		for (a = 0; a < old_size; a++)
			pointer[a] = old_ptr[a];
	}

	free(ptr);
	return (pointer);
}
