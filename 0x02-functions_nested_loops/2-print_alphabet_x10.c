#include <stdio.h>
/**
 * print_alphabet - Prints lower case alphabets 10 times
 *
 * Return: Nothing
 */

void print_alphabet_x10(void)
{	int i = 97, j = 0;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i < 123; i++)
			putchar(i);
		putchar('\n');
	}
}