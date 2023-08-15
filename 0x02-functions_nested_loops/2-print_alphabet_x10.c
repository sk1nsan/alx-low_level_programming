#include <stdio.h>
/**
 * print_alphabet_x10 - Prints lower case alphabets 10 times
 * Description: Prints lower case alphabets 10 times
 * no uppercase
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
