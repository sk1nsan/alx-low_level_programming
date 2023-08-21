#include "main.h"


/**
 * _strlen - returns the length of string
 *
 *@s: string to be checked
 *
 * Return: length of s
 */

int _strlen(char *s)
{
	char n = s[0];
	int i = 0;

	while (n != '\0')
	{
		i++;
		n = s[i];
	}
	return (i);
}

/**
 * puts_half - print every other char of string
 *
 *@str: string to be printed
 *
 * Return: void
 */

void puts_half(char *str)
{
	int l = _strlen(str);
	int i = l / 2;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
