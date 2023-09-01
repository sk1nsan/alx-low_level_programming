#include <stdio.h>
#include <stdlib.h>

/**
 * cent - convet to cents
 *
 * @x: number to be converted
 *
 * Return: number of cents
 */
int cent(int x)
{
	int result = 0;

	while (x >= 2)
	{
		if (x >= 25)
		{
			x -= 25;
			result++;
			continue;
		}
		if (x >= 10)
		{
			x -= 10;
			result++;
			continue;
		}
		if (x >= 5)
		{
			x -= 5;
			result++;
			continue;
		}
			x -= 2;
			result++;
	}
	return (result + x);
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
	int result = 0;
	int x;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("0\n");
		return (0);
	}
	printf("%d\n", cent(x));
	return (0);
}
