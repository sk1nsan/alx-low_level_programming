#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>


/**
 * isNumber - checks if a is a number or not
 *
 * @n: number of strings
 * @a: array of strings
 *
 * Return: 1 if it is a number
 * 0 otherwise
 */
int isNumber(int n, char *a[])
{
	int i, j;

	for (i = 1; i < n; i++)
	{
		for (j = 0; a[i][j] != '\0'; j++)
		{
			if (!isdigit(a[i][j]))
				return (0);
		}
	}
	return (1);
}

/**
 * main - entry point
 *
 * @argc: number of args
 * @argv: array of arguments
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	unsigned long result, a, b;
	char *ptr, *ptr2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!isNumber(argc, argv))
	{
		printf("Error\n");
		exit(98);
	}
	a = strtoul(argv[1], &ptr, 10);
	b = strtoul(argv[2], &ptr2, 10);
	result = a * b;
	printf("%lu\n", result);


	return (0);
}
