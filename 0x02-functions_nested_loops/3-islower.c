#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int _islower(int c);

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
 * _islower - checks if the int c is lower case or not
 * 
 * Return: 1 if c is lowercase
 *         0 otherwise 
 */

int _islower(int c)
{
	if (c > 96 && c < 132)
	{
		return (1);
	}
	return (0);
}
