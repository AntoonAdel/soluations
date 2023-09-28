#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - sums all arguments variadic
  * @n: number of arguments
  * @...: arguments variadic
  * Return: sum of its parameters
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, a;
	va_list ls;

	if (n == 0)
		return (0);
	va_start(ls, n);
	for (a = 0; a < n; a++)
		sum += va_arg(ls, int);

	va_end(ls);
	return (sum);
}
