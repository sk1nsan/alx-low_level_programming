#include "main.h"
/**
 * _puts_recursion - prints s, followed by a new line.
 *
 * @s: a string to be printed
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	_puts_recursion(s + 1);
}
