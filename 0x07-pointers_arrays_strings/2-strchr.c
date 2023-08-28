#include <stdio.h>
/**
 * _strchr - Returns the first occurrence of c in s
 *
 * @c: character to search for
 * @s: string to seatch for c
 *
 * Return: a pointer to the first occurrence of the character c
 *	or NULL if it is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (c == '\0')
		return (s + i);

	return (NULL);

}
