#include "main.h"

/**
 * create_file - create file
 * @filename: name file
 * @text_content: content
 * Return: file
 */

int create_file(const char *filename, char *text_content)
{
	int i, fd;
	ssize_t wr;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT, 0600);
		if (fd == -1)
		{
			return (-1);
		}
		return (1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	while (text_content[i] != 0)
	{
		i++;
	}

	wr = write(fd, text_content, i);

	if (wr == -1)
		return (-1);

	close(fd);
	return (1);
}
