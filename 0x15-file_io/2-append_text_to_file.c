#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * append_text_to_file - append text to file
 *
 * @filename: pointer to the file
 * @text_content: text to be written to the file
 *
 * Return: 1 if successful
 *	-1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, x;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (i = 0; text_content[i]; i++)
		;
	x = write(fd, text_content, i);
	if (x == -1)
		return (-1);
	return (1);
}
