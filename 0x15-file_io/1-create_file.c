#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * create_file - a function that creates a file.
 *
 * @filename: the name of the file to be created
 * @text_content: NULL terminated string to write to the file
 *
 * Return: (1) on success, (-1) on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, m, i;

	if (!filename)
	return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	for (i = 0; text_content[i] != '\0'; i++)
		;
	m = write(fd, text_content, i);
	close(fd);

	return (m == i ? 1 : -1);
}
