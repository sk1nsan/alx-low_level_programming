#include "main.h"
/**
 * print_last_digit - returns the last digit of n
 * @n: the number to be printed
 * Return: n%10
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = -n;

	int last = n % 10;

	_putchar(last + '0');
	return (last);
}
