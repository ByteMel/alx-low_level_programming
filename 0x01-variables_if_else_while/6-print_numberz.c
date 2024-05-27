#include <stdio.h>

/**
 * main - Checks whether the last digit of a number is positive or negatie
 *
 * Return: Always 0. Otherwise 1
 */

int main(void)
{
	int num = 0;

	while (num <= 10)
	{
		if (num != 10)
		putchar('0' + num);
		num++;
	}
	putchar('\n');

	return (0);
}
