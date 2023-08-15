#include <stdio.h>
#include <stdint.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int i, fib1 = 0, fib2 = 1, result = 0;

	while (fib1 + fib2 < 4000000)
	{	fib1 = fib1 + fib2;
		fib2 = fib1 + fib2;

		if (fib2 % 2 == 0)
			result += fib2;
		if (fib1 % 2 == 0)
			result += fib1;


	}
	printf("%lu\n", result);

	return (0);
}
