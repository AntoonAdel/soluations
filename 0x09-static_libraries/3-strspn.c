#include "main.h"

/**
  * _strspn - Entry point
  * @s: input
  * @accept: input
  * Return: Always 0 (Success)
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int t, e;

	for (t = 0; s[t] != '\0'; t++)
	{
		for (e = 0; accept[e] != s[t]; e++)
		{
			if (accept[e] == '\0')
				return (t);
		}
	}
	return (t);
}
