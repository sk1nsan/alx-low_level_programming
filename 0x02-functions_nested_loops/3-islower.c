#include <stdio.h>
/**
 * _islower - checks if the int c is lower case or not
 * @c: the letter to be checked
 * Description: checks if
 * c is lower case alphabet
 * Return: 1 if c is lowercase
 *	0 otherwise
 */

int _islower(int c)
{
	if (c > 96 && c < 132)
	{
		return (1);
	}
	return (0);
}
