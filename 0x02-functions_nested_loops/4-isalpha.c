#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int _isalpha(int c);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	return (0);
}

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
