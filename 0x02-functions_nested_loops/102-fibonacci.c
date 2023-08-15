#include <stdio.h>
#include <stdint.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int i, fib1 = 1, fib2 = 2;

	for (i = 0; i < 50; i++)
	{
		printf("%lu, ", fib1);
		printf("%lu, ", fib2);
		fib1 = fib1 + fib2;
		fib2 = fib1 + fib2;
	}
	printf("\n");

	return (0);
}
