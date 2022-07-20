#include "main.h"

/**
 * append_text_to_file - append at the end of a file
 * @filename: name of a file
 * @text_content: content of a file
 * Return: 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0;
	int wr;
	int fd;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	while (text_content[i] != 0)
		i++;

	wr = write(fd, text_content, i);

	if (wr == -1)
		return (-1);

	close(fd);
	return (1);
}
