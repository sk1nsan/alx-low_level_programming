#include "main.h"

/**
 * helper - checks if the first and last chars are equal
 *
 * @s: string to be checked
 *
 * Return 1 if they are equal
 * 0 otherwise
 */

int helper(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		;
	j = (s[0] == s[i - 1]);
	s[i-1] = '\0';
	return (j);
}


/**
 * is_palindrome - checks if s is a palindrome
 *
 * @s: a string to be checked
 *
 * Return: 1 if it s is a palindrome
 * 0 otherwise
 */

int is_palindrome(char *s)
{
	if (s[0] == '\0' || s[1] == '\0')
	{
		return (1);
	}
	if (helper(s))
	{
		is_palindrome(s+1);
	}
	return (0);
}
