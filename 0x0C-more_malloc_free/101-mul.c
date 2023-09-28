#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * if_digit - checks if a string contains a non-digit char
  * @s: string to be evaluated
  * Return: 0 if a non-digit is found, 1 otherwise
  */

int if_digit(char *s)
{
	int n = 0;

	while (s[n])
	{
		if (s[n] < '0' || s[n] > '9')
			return (0);
		n++;
	}
	return (1);
}

/**
  * _strlen - returns the length of a string
  * @s: string to evaluate
  * Return: the length of the string
  */

int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}

/**
  * errors - handles errors for main
  */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
  * main - multiplies two positive numbers
  * @argc: number of arguments
  * @argv: array of arguments
  * Return: always 0 (Success)
  */

int main(int argc, char *argv[])
{
	char *x1, *x2;
	int len1, len2, len, t, carry, d1, d2, *rslt, a = 0;

	x1 = argv[1], x2 = argv[2];
	if (argc != 3 || !if_digit(x1) || !if_digit(x2))
		errors();
	len1 = _strlen(x1);
	len2 = _strlen(x2);
	len = len1 + len2 + 1;
	rslt = malloc(sizeof(int) * len);
	if (!rslt)
		return (1);
	for (t = 0; t <= len1 + len2; t++)
		rslt[t] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		d1 = x1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(x2) - 1; len2 >= 0; len2--)
		{
			d2 = x2[len2] - '0';
			carry += rslt[len1 + len2 + 1] + (d1 * d2);
			rslt[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			rslt[len1 + len2 + 1] += carry;
	}
	for (t = 0; t < len - 1; t++)
	{
		if (rslt[t])
			a = 1;
		if (a)
			_putchar(rslt[t] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(rslt);
	return (0);
}
