#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - turns a string into words
 *
 * @str: string
 *
 * Return: pointer an array of strings(words)
 */

char **strtow(char *str)
{
	int i, n = 0;
	char **s;

	if (str == NULL || str == "")
		return (NULL);
	if (isalpha(str[0]))
		n++;
	for (i = 1; str[i]; i++)
	{
		if (str[i - 1] == ' ' && isalpha(str[i]))
			n++;

	}
	s = malloc(sizeof(char *) * n + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		while (isalpha[i])

	}
	s[n] = NULL;
	return (s);


}
