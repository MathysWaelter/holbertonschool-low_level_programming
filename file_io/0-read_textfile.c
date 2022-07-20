#include "main.h"

/**
 * read_textfile - read a text file and print
 * @filename: name 
 * @letters: nb of lettre 
 * Return: text
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer = malloc(letters);
	ssize_t wr = 0;
	ssize_t rd = 0;

	if (filename == NULL || buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	rd = read(fd, buffer, letters);
	if (rd == -1)
		return (0);

	wr = write(1, buffer, rd);
	if (wr == -1)
		return (0);

	close(fd);
	free(buffer);
	return (wr);
}
