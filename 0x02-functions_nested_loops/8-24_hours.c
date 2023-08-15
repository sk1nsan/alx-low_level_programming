#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void jack_bauer(void);

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
 * jack_bauer - prints every minute of a day
 *
 * Return: Nothing
 */

void jack_bauer(void)
{
	for (int i = 0; i < 24; i++)
	{
		for (int j = 0; j < 60; j++)
		{
			printf("%02d:%02d", i, j);
		}
	}
}
