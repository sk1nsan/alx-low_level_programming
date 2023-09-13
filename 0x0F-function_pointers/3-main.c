#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - entry point
 *
 * @argc: number of args
 * @argv: array or args
 *
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int (*ptr)(int, int);
	int result;
	int l:

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	ptr = get_op_func(argv[2]);
	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	l = strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0;
	if (strcmp(argv[3], "0") == 0 && l)
	{
		printf("Error\n");
		exit(100);
	}
	result = ptr(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);

	return (0);
}
