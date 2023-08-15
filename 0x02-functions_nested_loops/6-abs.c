#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int _abs(int);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	return (0);
}

/**
 * _abs - returns the absolute vaule of n
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
