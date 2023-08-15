#include <stdio.h>
/**
 * print_times_table - prints times table of n
 *
 * @n: the value to specify the table
 *
 * Description: Prints times of table 
 * of n
 *
 * Return: Nothing
 */

void print_times_table(int n)
{	int i = 0, j = 1;
	for (i = 0; i < n + 1; i++)
	{	printf("0,");
		for (j = 1; j < n + 1; j++)
		{
			if (i * j > 99)
				printf(" %d", i * j);
			else
				printf("  %d", i * j);
			if (j != n)
				putchar(',');
		}
		putchar('\n');
	}
}
