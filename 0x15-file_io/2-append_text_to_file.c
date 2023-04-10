#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - a function that appends text
 * at the end of a file
 *
 * @filename: the name of the file to append
 * @text_content: the content to append to the file
 *
 * Return: (1) on success, (-1) on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, written_num = 0;
	size_t length = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
	while (text_content[length])
		length++;

	written_num = write(fd, text_content, length);

	if (written_num == -1)
	{
		close(fd);
		return (-1);
	}
	}

	close(fd);

	return (1);
}
