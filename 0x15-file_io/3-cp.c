#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * file1fail - Print error message if can't read file
 * @file: Name of the file that can't be read
 */
void file1fail(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * file2fail - Print error message if can't write to file
 * @file: Name of the file that can't be write to
 */
void file2fail(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}

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
	int to, from, x, y, m, n;
	char s[1024];

	if (argn != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	if (from == -1)
		file1fail(argv[1]);
	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to == -1)

		file2fail(argv[2]);
	while (1)
	{
		m = read(from, s, 1024);
		if (m == -1)
			file1fail(argv[1]);
		if (m == 0)
			break;
		n = write(to, s, m);
		if (m != n)
			file2fail(argv[2]);
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
