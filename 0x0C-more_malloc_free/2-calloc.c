#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * _mmset -  initializes n bytes of memory to x
  * @pointer: initial adress
  * @d: variable to initialize with
  * @n: number of bytes to initialize
  * Return: Return pointer char (so movements are 1 byte)
  */

char *_mmset(char *pointer, int d, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		pointer[a] = d;

	return (pointer);
}

/**
  * _calloc -  allocates memory using malloc and initializes in 0
  * @nmemb: number of elements of array to allocate
  * @size: size of elements
  * Return: Pointer to allocated memory or normal process termination
  * with a status value of 98
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (0);

	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (0);
	_mmset(ptr, 0, size * nmemb);

	return (ptr);
}
