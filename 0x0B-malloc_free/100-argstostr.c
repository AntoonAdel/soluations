#include "main.h"
#include <stdlib.h>

/**
  * argstostr - concatenates arguments.
  * @ac: number of string to be concatenated.
  * @av: strings to be concatenated.
  * Return: String concatenated.
  */

char *argstostr(int ac, char **av)
{
	int a, n, t = 0;
	char *concat = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
		for (n = 0; av[a][n] != '\0'; n++)
			t++;
	concat = malloc(sizeof(char) * (t + ac + 1));
	if (concat == NULL)
		return (NULL);
	for (a = 0, t = 0; a < ac; a++)
	{
		for (n = 0; av[a][n] != '\0'; n++, t++)
			concat[t] = av[a][n];
		concat[t] = '\n';
		t++;
	}
	concat[t] = '\0';
	return (concat);
}
