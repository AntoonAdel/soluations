#include "function_pointers.h"

/**
  * print_name - writes the character c to stdout
  * @name: string
  * @f: pointer to function with char parameter and no return
  * Return: nothing
  */

void print_name(char *name, void (*f)(char *))
{
	if (f != 0)
		f(name);
}
