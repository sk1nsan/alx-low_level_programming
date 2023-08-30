#include "main.h"

/**
 * helper - helps
 * @i: starting point
 * @n: integer to get root of
 * Return: value of root
 */
int helper(int i, int n)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (helper(i + 1, n));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: an integer
 *
 * Return: the natural square root of a number.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helper(0, n));

}
