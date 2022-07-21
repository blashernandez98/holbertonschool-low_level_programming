#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - Appends text at the end of file.
 * @filename: Name of file.
 * @text_content: Content to append.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, letters;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		letters = write(fd, text_content, strlen(text_content));

		if (letters == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
