#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_strings - prints strings, followed by a new line
  * @separator: String to be printed between strings
  * @n: number of variadic arguments
  * @...: Arguments Variadic
  * Return: No return
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list ls;
	char *ch;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(ls, n);
	for (a = 0; a < n - 1; a++)
	{
		ch = va_arg(ls, char *);
		if (ch)
			printf("%s", ch);
		else
			printf("(nil)");
		if (separator)
			printf("%s", separator);
	}
	ch = va_arg(ls, char *);
	if (ch)
		printf("%s\n", ch);
	else
		printf("(nil)\n");
	va_end(ls);
}
