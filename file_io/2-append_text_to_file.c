#include "main.h"
/**
 * append_text_to_file - Function that appends text at the end of a file.
 * @filename: It's a file in argument.
 * @text_content: It's a char on the file.
 * Return: return 1 on success or -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t wr;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0 ; text_content[len] != '\0' ;)
		{
			len++;
		}
		wr = write(fd, text_content, len);
	}
	if (wr == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
