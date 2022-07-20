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
	int wr, j;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	
	if (fd == -1)
		return (-1);
	
	if (text_content == NULL)
	{
		j = open(filename, O_CREAT | O_RDONLY);
		if (j == -1)
			return (-1);
		text_content = malloc(sizeof(char) * 1);
		read(j, text_content, 0);
	}
	
	for (i = 0; text_content[i]; i++)
		;

	wr = write(fd, text_content, i);

	if (wr == -1)
		return (-1);
	
	close(j);
	close(fd);
	return (1);
}
