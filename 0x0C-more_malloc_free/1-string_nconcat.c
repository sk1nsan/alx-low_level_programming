#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: string
 * @s2: string
 * @n: number of char to be concat
 *
 * Return: pointer to string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int i, j;

	for (i = 0; s1[i] && s1 != NULL; i++)
		;

	for (j = 0; s2[j] && s2 != NULL && j < n; j++)
		;
	x = malloc(i + j + 1);
	if (x == NULL)
		return (NULL);

	for (i = 0; s1[i] && s1 != NULL; i++)
		x[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0' && s2 != NULL; j++)
		x[i + j] = s2[j];
	x[i + j] = '\0';
	return (x);
}
