#include <stdio.h>
/**
 * print_to_98 - prints numbers from n to 98
 * parameters: int n
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
