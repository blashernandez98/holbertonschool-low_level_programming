#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - Reads text from file
 * @filename: Path to file
 * @letters: Number of letters to read from file.
 *
 * Return: Number of letters read or 0 if fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, file_letters, write_letters;
	char *buf;

	fd = open(filename, O_RDONLY);

	if (fd == -1 || !filename)
		return (0);
	
	buf = malloc(sizeof(char) * letters);
	file_letters = read(fd, buf, letters);

	if (file_letters == -1)
	{
		free(buf);
		return (0);
	}
	write_letters = write(1, buf, file_letters);

	if (write_letters == -1)
	{
		free(buf);
		return (0);
	}
	close(fd);
	return (write_letters);
}
