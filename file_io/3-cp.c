#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * error_check - Checks for errors in system calls
 * @n: Return value of system call
 * @code: Exit code to use if necessary.
 * @name: String to use for error msg.
 */

void error_check(int n, int code, char *name)
{
	if (n != -1)
		return;

	switch (code) {
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", name);
			exit(98);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", name);
			exit(99);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", name);
			exit(100);
	}
}

/**
 * main - Entry point.
 * @argc: Number of arguments
 * @argv: Pointer to list of arguments.
 */

int main(int argc, char **argv)
{
	int file1, file2, copied, wrote;
	char buffer[1024];
	char str[4];
	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}

	file1 = open(argv[1], O_RDONLY);
	file2 = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	error_check(file1, 98, argv[1]);
	error_check(file2, 99, argv[2]);

	while (1)
	{
		copied = read(file1, buffer, 1024);
		error_check(copied, 98, argv[1]);

		wrote = write(file2, buffer, copied);
		error_check(wrote, 99, argv[2]);
		if (!copied)
			break;
	}

	sprintf(str, "%d", file1);
	error_check(close(file1), 100, str);
	sprintf(str, "%d", file2);
	error_check(close(file2), 100, str);

	return (0);
}
