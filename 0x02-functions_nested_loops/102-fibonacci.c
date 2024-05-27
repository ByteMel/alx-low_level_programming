#include "main.h"

/**
* fibonacci_sequence - function that prints the first 50  Fibonacci series
* @n: Value used in main
*
**/

void fibonacci_sequence(int n)
{
	int first = 1;
	int second = 2;
	int next;
	int i;

	printf("%d, %d", first, second);

	for (i = 2; i < n; i++)
	{
		next = first + second;
		printf(", %d", next);
		first = second;
		second = next;
	}

	printf("\n");
}

/**
 *main - calls the function fibonacci_sequence
 *Return: 0 when successfull
 **/

int main(void)
{
	int n = 50;

	fibonacci_sequence(n);
	return (0);
}
