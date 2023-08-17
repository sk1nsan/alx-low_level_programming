#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - print '\' n times forming a diagonal
 *
 *@n: how many '\' to be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');

	}
	if (i <= 0)
		_putchar('\n');

}
