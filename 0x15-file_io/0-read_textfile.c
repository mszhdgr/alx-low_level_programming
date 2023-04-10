#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output.
 *
 * @filename: a pointer to the file to be read
 * @letters: letters is the number of letters it should read and print
 *
 * Return: if write fails return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t input_fd, readed, writ;
	char *read_buffer;

	if (filename == NULL)
		return (0);

	read_buffer = malloc(sizeof(char) * letters);
	if (read_buffer == NULL)
		return (0);

	input_fd = open(filename, O_RDONLY);
	readed = read(input_fd, read_buffer, letters);
	writ = write(STDOUT_FILENO, read_buffer, readed);

	if (input_fd == -1 || readed == -1 || writ == -1 || writ != readed)
	{
		free(read_buffer);
		return (0);
	}

	free(read_buffer);
	close(input_fd);

	return (writ);
}
