#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints a name
 * @name: the name to print
 * @f: the function pointer that determines how to print
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

