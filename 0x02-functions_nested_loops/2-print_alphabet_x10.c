#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void print_alphabet_x10(void);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet_x10();

	return (0);
}

/**
 * print_alphabet - Prints lower case alphabets 10 times
 *
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	for (int j = 0; j < 10; j++)
	{
		for (int i = 97; i < 123; i++)
			putchar(i);
		putchar('\n');
	}
}
