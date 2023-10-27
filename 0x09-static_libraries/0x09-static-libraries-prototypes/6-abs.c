#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @num: Integer to be computed
 *
 * Return: The absolute value of num
 */

int _abs(int num)
{
	return (num < 0 ? -num : num == 0 ? 0 : num);
}
