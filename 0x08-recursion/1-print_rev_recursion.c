#include "main.h"
/**
 * print_rev_recursion - prints s in reverse
 *
 * @s: a string to be printed
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(s[0]);
}
