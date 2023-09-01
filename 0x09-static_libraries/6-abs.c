#include <stdio.h>
/**
 * _abs - returns the absolute vaule of n
 * @n: the number to be checked
 *
 * Return: n if n is greater than zero
 *         0 if n is equal to zero
 *         -n if n is less than zero
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);
	return (0);
}
