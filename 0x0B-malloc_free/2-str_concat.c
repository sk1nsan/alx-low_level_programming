#include <stdio.h>
#include <stdlib.h>

/**
 * _str_concat - allocates  space in memory which contains s1, followed by s2
 *
 * @s1: string
 * @s2: string
 *
 * Return: pointer to the concat string
 * or NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *str;

	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;
	str = malloc(sizeof(char) * (i + j) + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		str[i] = s1[i];
	for (j = 0; s2[j]; j++)
		str[i + j] = s2[j];
	str[i + j] = '\0';
	return (str);

}
