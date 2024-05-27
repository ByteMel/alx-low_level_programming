#include "function_pointers.h"
#include <stdlib.h>

/**
 *print_name - Prints the name
 *@name: A pointer to the name to be printed
 *@f: Pointer to a function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
