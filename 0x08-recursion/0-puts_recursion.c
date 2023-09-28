#include "main.h"

/**
  * _puts_recursion - print a string with a new line
  * @s: string
  *
  *Return: Success 1
  */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
