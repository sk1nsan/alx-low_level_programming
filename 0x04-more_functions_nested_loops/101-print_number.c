#include <stdio.h>
#include "main.h"
/**
 * print_number - prints numbers inputed
 *
 * @n: number to be printed
 *
 * Return: void
 */
int power(int x, int y)
{
	if (y == 0)
		return (1);
	return (x * power(x, y-1));

}


void print_number(int n)
{
	int digits = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n < 0 )
		{
			_putchar('-');
			n = -n;
		}
		while (n / 10 != 0)
			digits++;
		while (digits != 0)
		{
			_putchar('0' + n / power(10,n));
		}


	}
	_putchar('\n');

}
