#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - function that prints a name.
 *
 * @name: person
 * @f: pointer to the person name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}

