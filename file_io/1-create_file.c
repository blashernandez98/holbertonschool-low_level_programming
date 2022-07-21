#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_file - Creates new file.
 * @filename: Name of new file.
 * @text_content: Content for new file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, letters;

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if ((fd == -1) || !(text_content))
		return (-1);

	letters = write(fd, text_content, strlen(text_content));

	if (letters == -1)
		return (-1);
	close(fd);
	return (1);
}
