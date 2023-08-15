#include <stdio.h>
/**
 * times_table - prints times table
 *
 * Return: Nothing
 */

void times_table(void)
{	int i = 0, j = 1;
	for (i = 0; i < 10; i++)
	{	printf("0,");
		for (j = 1; j < 10; j++)
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
