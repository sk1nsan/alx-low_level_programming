#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isNumber - checks if n is a number or not
 *
 * @n: string to be checked
 *
 * Return: 1 if it is a number
 * 0 otherwise
 */
int isNumber(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (!isdigit(n[i]))
			return (0);
	}
	return (1);
}
/**
 * main - entry point
 *
 * @argc: number of arguments
 * @argv: array of these arguments
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int result = 0, i;

	for (i = 1; i < argc; i++)
	{
		if (!isNumber(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(argv[i]);

	}
	printf("%d\n", result);
	return (0);
}
