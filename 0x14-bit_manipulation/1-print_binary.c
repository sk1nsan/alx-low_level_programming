#include "main.h"
/**
 * print_binary - prints int in binary
 *
 * @n: int to be printed
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, l = 0;
	unsigned long int x = n;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 0; x; i++)
	{
		l++;
		x = x & ~(1 << i);
	}
	for (i = 0; l > 0; l--, i++)
	{
		if ((n & (1 << (l - 1))) != 0)
			_putchar('1');
		else
			_putchar('0');
	}
}
