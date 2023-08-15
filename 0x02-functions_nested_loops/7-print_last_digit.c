#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - returns the last digit of n
 * @n: the number to be printed
 * Return: n%10
 */

int print_last_digit(int n)
{
	int last = _abs(n % 10);

	_putchar(last + '0');
	return (last);
}
