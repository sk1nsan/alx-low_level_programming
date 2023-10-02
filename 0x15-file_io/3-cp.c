#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * main - entry point
 *
 * @argn: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 always
 *
 */
int main(int argn, char *argv[])
{
	int to, from, x, y, z;
	char s[1024];

	if (argn != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
		exit(98);
	}
	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
		exit(99);
	}
	while (1)
	{
	z = read(from, s, 1024);
	if (z == 0)
		break;
	write(to, s, 1024);
	}
	x = close(from);
	y = close(to);
	if (x == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	if (y == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", to);
		exit(100);
	}
	return (0);
}
