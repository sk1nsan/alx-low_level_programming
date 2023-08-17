#include <math.h>
#include <stdio.h>

/**
 * is_prime - checks if the number is prime
 *
 * @n: number to be checked
 *
 * Return: 1 if prime
 *	0 if not
 */

int is_prime(int n)
{
	int i;

	for (i = 2; i < sqrt(n); i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}




/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long n = 612852475143, i, result;

	for (i = 1; i < sqrt(n); i += 2)
	{
		if (n % i == 0 && is_prime(i))
			result = i;
	}
	printf("%ld\n", result);
	return (0);
}
