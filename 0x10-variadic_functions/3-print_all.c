#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_all - prints anything.
  * @format: for the output.
  */

void print_all(const char * const format, ...)
{
	int a = 0, valid_format;
	char *str;
	va_list list;

	va_start(list, format);
	while (format && format[a] != '\0')
	{
		valid_format = 1;
		switch (format[a])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%i", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				str = va_arg(list, char *);
				if (str)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
			default:
				valid_format = 0;
				break;
		}
		if (format[a + 1] != '\0' && valid_format == 1)
			printf(", ");
		a++;
	}
	printf("\n");
	va_end(list);
}
