#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long long int i, fib1 = 1, fib2 = 2;

	for (i = 0; i < 50; i++)
	{
		printf("%llu, ", fib1);
		printf("%llu, ", fib2);
		fib1 = fib1 + fib2;
		fib2 = fib1 + fib2;		
	}
	printf("\n");

	return (0);
}
