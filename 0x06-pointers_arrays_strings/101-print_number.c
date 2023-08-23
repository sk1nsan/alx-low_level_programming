#include "main.h"
/**
 * power -  x to the power y
 *
 * Description: Takes an integer x and raise
 * to the exponent y
 *
 * @x: Base
 * @y: Exponent
 *
 * Return: x^y
 */


int power(int x, int y)
{
	if (y == 0)
		return (1);

	return (x * power(x, y - 1));

}

/**
 * print_number - prints numbers inputed
 *
 * @n: number to be printed
 *
 * Return: void
 */


void print_number(int n)
{
	int digits = 0;
	int temp_n = n;
	unsigned int n1 = n;
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			n1 = -n;
		}
		while (temp_n / 10 != 0)
		{
			digits++;
			temp_n /= 10;
		}
		while (digits != -1)
		{
			_putchar('0' + n1 / power(10, digits));
			n1 = n1 % power(10, digits);
			digits--;
		}
	}
}
