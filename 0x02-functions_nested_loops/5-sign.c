#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int print_sign(int n);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	return (0);
}

/**
 * print_sign - checks the sign of n and prints it
 *
 * Return: 1 if n is greater than zero
 *         0 if n is equal to zero
 *         -1 if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n < 0)
	{
		printf("-");
		return (-1);
	}

	printf("0");
	return (0);
}
