#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output.
 *
 * @filename: a pointer to the file to be read
 * @letters: is the number of letters it should read and print
 *
 * Return: if write fails return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int m, x;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	m = read(fd, buf, letters);
	if (m < 0)
	{
		free(buf);
		return (0);
	}
	buf[m] = '\0';
	close(fd);
	x = write(STDOUT_FILENO, buf, m);
	if (x < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (x);
}
