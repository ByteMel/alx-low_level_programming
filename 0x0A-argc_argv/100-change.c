#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount
 *	    if c != 1, print Error
 *	    f the number passed as the argument is negative, print 0
 *	    You can use coins of values 25, 10, 5, 2, and 1 cent
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 1 if argc != 1, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int amnt, coins[5] = {25, 10, 5, 2, 1};
	int i = 0, count = 0, ln = sizeof(coins) / sizeof(coins[0]);

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	amnt = atoi(argv[1]);

	if (argc == 2 && amnt >= 0)
	{
		for (i = 0; i < ln; i++)
		{
			count += amnt / coins[i];
			amnt %= coins[i];
		}
		printf("%d\n", count);
	}

	else
		printf("0\n");

	return (0);
}
