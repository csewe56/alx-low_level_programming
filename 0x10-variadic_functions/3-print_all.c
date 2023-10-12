#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything based on the provided format.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *sep = "";
	unsigned int i = 0;

	va_start(args, format);

	while (format && format[i])
	{
		char *str;

		(format[i] == 'c') ? printf("%s%c", sep, va_arg(args, int)) : 0;
		(format[i] == 'i') ? printf("%s%d", sep, va_arg(args, int)) : 0;
		(format[i] == 'f') ? printf("%s%f", sep, (float)va_arg(args, double)) : 0;
		if (format[i] == 's')
		{
			sep = ", ";
			str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		}
		i++;
	}

	printf("\n");
	va_end(args);
}


