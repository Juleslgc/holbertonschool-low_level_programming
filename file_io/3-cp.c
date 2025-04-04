#include "main.h"
/**
 * main - Program that copies the content of a file to another file.
 * @argc: It's a number of argument.
 * @argv: It's a argument.
 * Return: return 0 in end.
 */

int main(int argc, char *argv[])
{
	int fd2, fdf;
	ssize_t rd, wr;
	char *buffer[1024];

	if (argc != 3)
	{	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdf = open(argv[1], O_RDWR);
	if (fdf == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	rd = read(fdf, buffer, 1024);
	if (rd == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (rd > 0)
	{	wr = write(fd2, buffer, rd);
		if (wr == -1)
		{	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99); }
		rd = read(fdf, buffer, 1024); }
	if (close(fdf) == -1)
	{	dprintf(STDERR_FILENO, "Erreur: Can't close fd %d\n", fdf);
		exit(100);
	}
	if (close(fd2) == -1)
	{	dprintf(STDERR_FILENO, "Erreur: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
