#include "main.h"
/**
 * strlength - returns length of s
 *
 * @s: string to be checked
 *
 * Return: length of s
 */

int strlength(char *s)
{
	if (s[0] == '\0')
		return (0);
	return (strlength(s + 1) + 1);
}

/**
 * strcpy1 - copy src to dest
 *
 * @src: source of copy
 * @dest: dest of copy
 * @i: staring point
 *
 * Return: void
 */

void strcpy1(char *dest, char *src, int i)
{
	if (src[i] == '\0')
	{
		dest[i] = '\0';
		return;
	}
	dest[i] = src[i];
	strcpy1(dest, src, i + 1);

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
	int j;

	j = (s[0] == s[strlength(s) - 1]);
	s[strlength(s) - 1] = '\0';
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

	strcpy1(t, s, 0);
	if (t[0] == '\0' || t[1] == '\0')
		return (1);
	if (helper(t))
		return (is_palindrome(t + 1));
	return (0);
}
