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
 * rev_string - print string reversed
 *
 *@s: string to reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int l = _strlen(s);

	while (l != 0)
	{
		_putchar(s[l - 1]);
		l--;
	}
	_putchar('\n');
}
