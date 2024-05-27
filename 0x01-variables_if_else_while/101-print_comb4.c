#include <stdio.h>

/**
 * main - Checks whether the last digit of a number is positive or negatie
 *
 * Return: Always 0. Otherwise 1
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}

			}
		}
	}

	putchar('\n');
	return (0);
}
