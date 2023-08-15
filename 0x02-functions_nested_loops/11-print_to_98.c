#include <stdio.h>
/**
 * print_to_98 - prints numbers from n to 98
 * @n: the number where we are going to start from
 * Return: Nothing
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%i, ", n);
			n++;
		}
		printf("98\n");
	}
	else
	{
		while (n > 98)
		{
			printf("%i, ", n);
			n--;
		}
		printf("98\n");
	}
}
