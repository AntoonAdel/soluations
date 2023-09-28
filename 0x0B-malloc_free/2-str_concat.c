#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * str_concat - concatenates two strings
  * @s1: string1
  * @s2: string2
  * Return: Pointer
  */

char *str_concat(char *s1, char *s2)
{
	char *array = NULL;
	unsigned int a = 0, n = 0, t;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a] != '\0')
		a++;
	while (s2[n] != '\0')
		n++;
	array = malloc((a + n + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (t = 0; t < a; t++)
		array[t] = s1[t];
	a = t;
	for (t = 0; t < n; t++)
	{
		array[a] = s2[t];
		a++;
	}
	array[a] = '\0';
	return (array);
}
