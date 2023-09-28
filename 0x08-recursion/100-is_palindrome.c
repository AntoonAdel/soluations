#include "main.h"

/**
  * strlen_recursion - Prints the length of a string
  * @s: the string to be printed
  * Return: the length of string
  */

int strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + strlen_recursion(s + 1));
	return (0);
}

/**
  * palindrome_checker - check if s is palindrome.
  * @s: string base address.
  * @a: left index.
  * @n: rigth index.
  * Return: 1 if s is palindrome, 0 otherwise.
  */

int palindrome_checker(char *s, int a, int n)
{
	if (s[a] == s[n])
	{
		if (a > n / 2)
			return (1);

		else
			return (palindrome_checker(s, a + 1, n - 1));
	}
	else
		return (0);
}

/**
  * is_palindrome - check if s is palindrome
  * @s: base address for string
  * Return: 1 if n is prime, 0 otherwise
  */

int is_palindrome(char *s)
{
	return (palindrome_checker(s, 0, strlen_recursion(s) - 1));
}
