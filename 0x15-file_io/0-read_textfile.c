#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
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

	if (filename == NULL)
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
	close(fd);
	y = write(STDOUT_FILENO, c, x);
	if (y == -1)
	{
		free(c);
		return (0);
	}
	if (y != x)
		return (0);
	return (x);
}
