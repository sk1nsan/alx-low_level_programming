#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void times_table(void);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	times_table();
	return (0);
}

/**
 * times_table - prints times table
 *
 * Return: Nothing
 */

void times_table(void)
{
	for (int i = 0; i < 10; i++)
	{	printf("0,");
		for (int j = 1; j < 10; j++)
		{
			if (i * j > 9)
				printf(" %d", i * j);
			else
				printf("  %d", i * j);
			if (j != 9)
				putchar(',');
		}
		putchar('\n');
	}
}
