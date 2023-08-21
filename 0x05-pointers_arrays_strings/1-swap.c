#include <stdio.h>
/**
 * swap_int - swaping 2 integers
 *
 *@a: address of first int
 *@b: address of second int
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
