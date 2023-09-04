#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - turns arguments into strings
 *
 * @ac: number of arguments
 * @av: arguments
 *
 * Return: pointer to the string
 */
char *argstostr(int ac, char **av)
{
	int i, j, n = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			n++;
		n++;
	}
	str = malloc(sizeof(char) * n + 1);
	if (str == NULL)
		return (NULL);
	n = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[n] = av[i][j];
			n++;
		}
		str[n] = '\n';
		n++;
	}
	str[n] = '\0';
	return (str);


}
