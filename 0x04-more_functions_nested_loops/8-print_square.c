#include <stdio.h>
#include "main.h"
/**
 * print_square - print a square of '#' with side length n
 *
 *@size: side length of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');

	}
	if (i <= 0)
		_putchar('\n');

}
