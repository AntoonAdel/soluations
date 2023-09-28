#include "main.h"

/**
  * _strncat - concatenate two strings
  * using at most n bytes from src
  * @dest: input value
  * @src: input value
  * @n: input value
  * Return: dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int a, t;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	for (t = 0; t < n && src[t] != '\0'; t++)
	{
		dest[a + t] = src[t];
	}

	dest[a + t] = '\0';
	return (dest);
}
