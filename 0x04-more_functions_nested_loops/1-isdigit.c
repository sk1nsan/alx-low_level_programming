#include <stdio.h>
/**
 * _isdigit - check if the character is a digit (0-9)
 *
 *@c: the int to be checked
 *
 * Return: 1 if it is a digit
 *	0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);

}
