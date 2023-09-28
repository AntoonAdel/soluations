#include "main.h"

/**
  * _strlen_recursion - returns lenght of string
  * @s: string
  * Return: _strlen_recursion
  */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
