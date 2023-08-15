#include <stdio.h>
/**
 * jack_bauer - prints every minute of a day
 *
 * Return: Nothing
 */

void jack_bauer(void)
{	int i = 0, j = 0;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			printf("%02d:%02d", i, j);
		}
	}
}
