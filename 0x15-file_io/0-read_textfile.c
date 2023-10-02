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
	char *c;
	int fd;
	ssize_t x, y;

	if (!filename)
		return (0);
	c = malloc(sizeof(char) * letters);
	if (c == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(c);
		return (0);
	}
	x = read(fd, c, letters);
	if (x == -1)
	{
		free(c);
		close(fd);
		return (0);
	}
	y = write(1, c, x);
	free(c);
	close(fd);
	if (y == -1 || y != x)
		return (0);
	return (y);
}
