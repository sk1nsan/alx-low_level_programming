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
 * puts2 - print every other char of string
 *
 *@str: string to be printed
 *
 * Return: void
 */

void puts2(char *str)
{
	int l = _strlen(str);
	int i = 0;

	while (l > i)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
