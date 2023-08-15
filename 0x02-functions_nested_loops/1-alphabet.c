#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void print_alphabet(void);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet();

	return (0);
}

/**
 * print_alphabet - Prints lower case alphabets
 *
 * Return: Nothing
 */

void print_alphabet(void)
{
	for (int i = 97; i < 123; i++)
		putchar(i);
	putchar('\n');

}
