#include <stdio.h>
#include <stdint.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	uintmax_t i, fib1 = 1, fib2 = 2, result = 0;

	for (i = 0; i < 50; i++)
	{

		if (fib1 % 2 == 0)
			result += fib1;
		if (fib2 % 2 == 0)
			result += fib1;
		fib1 = fib1 + fib2;
		fib2 = fib1 + fib2;
		if (fib2 > 4000000)
			break;

	}
	printf("%ju\n", result);

	return (0);
}