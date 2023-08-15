#include <stdio.h>
/**
 * _isalpha - checks if c is an the alphabet or not
 *
 * Return: 1 if c is in the alphabet
 *         0 otherwise
 */

int _islower(int c)
{
	if ((c > 96 && c < 132) || (c > 64 && c < 91))
	{
		return (1);
	}
	return (0);
}
