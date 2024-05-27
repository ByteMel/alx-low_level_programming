#include "function_pointers.h"
#include <stdlib.h>

/**
 *array_iterator - Executes a function given as a parameter
 *@array: A pointer to the array to be iterated
 *@size: Size of the array
 *@action: A Pointer to any function that takes an interger as a parameter
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}


}
