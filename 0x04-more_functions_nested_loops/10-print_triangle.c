#include <stdio.h>
#include "main.h"
/**
 * print_triangle - print triangle using '#' with side length n
 *
 *@n: the size length
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i < size + 1; i++)
	{
		for (j = size - i; j > 0; j--)
			_putchar(' ');
		for (k = 0; k < i; k++)
			_putchar('#');
		_putchar('\n');

	}
	if (size <= 0)
		_putchar('\n');

}
