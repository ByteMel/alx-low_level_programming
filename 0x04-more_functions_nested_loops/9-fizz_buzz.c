#include <stdio.h>

/**
 *main - test to print the fizz buzz test
 *Return: 0 is successfull
 **/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i != 100)
		{
			if (i % 3 == 0 && i % 5 == 0)
				printf("FizzBuzz ");
			else if (i % 3 == 0)
				printf("Fizz ");
			else if (i % 5 == 0)
				printf("Buzz ");
			else
				printf("%d ", i);
		}
		else
			printf("Buzz");
	}
	putchar(10);

	return (0);
}
