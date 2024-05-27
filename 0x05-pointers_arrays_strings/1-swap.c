#include "main.h"

/**
 *swap_int - swaps the values of two integers
 *@a: The first integer
 *@b: The second integer
 */

void swap_int(int *a, int *b)
{
	int prt;

	prt = *a;
	*a = *b;
	*b = prt;

}
