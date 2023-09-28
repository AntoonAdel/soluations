#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * _ifnumber - checks if string is a number
  * @s: string
  * Return: On success 1.
  * If not a number, 0 is returned.
  */

int _ifnumber(char *s)
{
	int a, checker, n;

	a = 0, n = 0, checker = 1;
	if (*s == '-')
		a++;
	for (; *(s + a) != 0; a++)
	{
		n = isdigit(*(s + a));
		if (n == 0)
		{
			checker = 0;
			break;
		}
	}
	return (checker);
}

/**
  * main - Entry point
  * @argc: Counts the number of parameters that go into main
  * @argv: Pointer of array of pointers containing strings entering main
  * Return: Always 0 (Success)
  */

int main(int argc, char *argv[])
{
	int t, o, ex;

	ex = 0, o = 0;
	if (argc > 1)
	{
		for (t = 1; t < argc; t++)
		{
			if (_ifnumber(argv[t]))
				o += atoi(argv[t]);
			else
				ex = 1;
		}
	}
	if (ex == 0)
		printf("%d\n", o);
	else
		printf("%s\n", "Error");

	return (ex);
}
