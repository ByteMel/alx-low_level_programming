#include "3-calc.h"

/**/

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: operator passed as argument to the program
 *
 * Return: a pointer to the function that corresponds to the operator
 * given as a parameter. If s does not match any of the 5 expected
 * operators (+, -, *, /, %), return NULL
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
