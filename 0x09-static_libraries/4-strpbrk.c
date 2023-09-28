#include "main.h"

/**
  * _strpbrk - Entry point
  * @s: input
  * @accept: input
  * Return: Always 0 (Success)
  */

char *_strpbrk(char *s, char *accept)
{
	int t, e;
	char *p;

	t = 0;
	while (s[t] != '\0')
	{
		e = 0;
		while (accept[e] != '\0')
		{
			if (accept[e] == s[t])
			{
				p = &s[t];
				return (p);
			}
			e++;
		}
		t++;
	}
	return (0);
}
