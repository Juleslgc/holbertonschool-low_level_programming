#include "main.h"
/**
 * read_textfile - Function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: It's a file in the argument.
 * @letters: It's a number of letter.
 * Return: return number of char.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	rd = read(fd, buffer, letters);
	if (rd == -1)
	{
		return (0);
	}
	wr = write(STDOUT_FILENO, buffer, rd);
	if (wr == -1)
	{
		return (0);
	}
	close(fd);
	free(buffer);
	return (wr);
}
