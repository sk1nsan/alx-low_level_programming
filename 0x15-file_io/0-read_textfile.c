#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - read file
 *
 * @filename: pointer to the file
 * @letters: number of letters to be printed
 *
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *c = malloc(sizeof(char) * letters);
	int fd, x, y;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	x = read(fd, c, letters);
	y = write(1, c, x);
	free(c);
	close(fd);
	if (x == -1 || y == -1)
		return (0);
	return (y);
}
