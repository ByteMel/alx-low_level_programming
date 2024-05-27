#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Checks whether the last digit of a number is positive or negatie
 *
 * Return: Always 0. Otherwise 1
 */

int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (n > 0)
	{
		if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
		else if (last == 0)
		printf("Last digit of %d is %d and is 0\n", n, last);
		else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}

	return (0);
}
