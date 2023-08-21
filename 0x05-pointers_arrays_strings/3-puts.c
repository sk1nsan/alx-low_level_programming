#include "main.h"
/**
 * _strlen - print string
 *
 *@str: string to printed
 *
 * Return: void
 */

void _puts(char *str)
{
	char n = str[0];
	int i = 0;

	while (n != '\0')
	{
		_putchar(str[i]);
		i++;
		n = str[i];
	}
	_putchar('\n');
}
