#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * create_file - create file
 *
 * @filename: pointer to the file
 * @text_content: text to be written to the file
 *
 * Return: 1 if successful
 *	0 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;
	ssize_t x;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (0);
	}
	if (text_content == NULL)
		return (1);
	for (i = 0; text_content[i]; i++)
		;
	x = write(fd, text_content, i);
	if (x == -1)
		return (0);
	return (1);
}
