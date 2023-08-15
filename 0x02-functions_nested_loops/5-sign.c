#include <stdio.h>
/**
 * print_sign - checks the sign of n and prints it
 * @n: the number to be checked
 *
 * Return: 1 if n is greater than zero
 *         0 if n is equal to zero
 *         -1 if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}

	putchar('0');
	return (0);
}
