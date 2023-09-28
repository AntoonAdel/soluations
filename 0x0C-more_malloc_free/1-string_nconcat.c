#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * string_nconcat -  concatenates two strings
  * @s1: string1
  * @s2: string2
  * @n: n bytes of string 2
  * Return: Pointer to allocated memory of s1 + nbytes of s2
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, t, len1, len2;
	char *str;
	char *null = "";

	if (s1 == NULL)
		s1 = null;
	if (s2 == NULL)
		s2 = null;

	len1 = 0, len2 = 0;
	while (*(s1 + len1))
		len1++;
	while (*(s2 + len2))
		len2++;

	if (n < len2)
		len2 = n;

	str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (str == 0)
		return (0);

	for (a = 0; a < len1; a++)
		*(str + a) = *(s1 + a);

	for (a = 0, t = len1; a < len2; t++, a++)
		*(str + t) = *(s2 + a);

	*(str + t) = '\0';

	return (str);
}
