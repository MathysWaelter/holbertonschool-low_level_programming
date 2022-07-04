#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function thats prints a name
 * @name: name
 * @f - print
 */

void print_name(char *name, void (*f)(char*))
{
	f(name);
}
