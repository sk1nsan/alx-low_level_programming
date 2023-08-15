#include <stdio.h>
/**
 * _isalpha - checks if c is in the alphabet or not
 * @c: the letter to be checked
 *
 * Description: check if c
 * is in the alphabet or not
 * and returns 1 if it is otherwise 
 * returns 0
 * Return: 1 if c is in the alphabet
 *         0 otherwise
 */

int _isalpha(int c)
{
	if ((c > 96 && c < 132) || (c > 64 && c < 91))
	{
		return (1);
	}
	return (0);
}
