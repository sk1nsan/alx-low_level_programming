#include "main.h"
/**
 * helper - checks if number is prime or not
 *
 * @i: starting point
 * @n: number to be checked
 *
 * Return: 1 if prime
 * 0 otherwise
 */
int helper(int i, int n)
{

	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (helper(i + 1, n));
}
/**
 * iS_prime_number - checks if n is prime
 *
 * @n: an integer
 *
 * Return: 1 if prime
 *	0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (helper(2, n));
}
