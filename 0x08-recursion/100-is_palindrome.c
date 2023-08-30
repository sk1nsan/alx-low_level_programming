#include "main.h"
/**
 * cpystring - return a copy of s
 *
 * @src: string to be copied
 * @dest: destination of the copy
 *
 * Return: d a copy of s
 */
char *cpystring(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);

}
/**
 * helper - checks if the first and last chars are equal
 *
 * @s: string to be checked
 *
 * Return: 1 if they are equal
 * 0 otherwise
 */

int helper(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		;
	j = (s[0] == s[i - 1]);
	s[i - 1] = '\0';
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
	char t[1000];

	cpystring(t, s);

	if (t[0] == '\0' || t[1] == '\0')
		return (1);
	if (helper(t))
		return (is_palindrome(t + 1));
	return (0);
}
