#include "main.h"

/**
  * _strchr - Entry point
  * @s: input
  * @c: input
  * Return: Always 0 (Success)
  */

char *_strchr(char *s, char c)
{
	int e;

	for (e = 0; s[e] >= '\0'; e++)
	{
		if (s[e] == c)
		{
			return (s + e);
		}
	}
	return (0);
}
