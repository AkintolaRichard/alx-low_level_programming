#include "main.h"


/**
 * from_open_error - check for error in opening a file
 * @fd_from: the file descriptor
 * @argv: string
 * Return: nothing or exit with code 98.
 */
void from_open_error(int fd_from, char *argv)
{
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
		exit(98);
	}
}

/**
 * to_open_error - check for error in opening a file
 * @fd_to: the file descriptor
 * @argv: string
 * Return: nothing or exit with code 99.
 */
void to_open_error(int fd_to, char *argv)
{
	if (fd_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
		exit(99);
	}
}

/**
 * read_from_error - check for error in reading a file
 * @read_from: the file descriptor
 * @argv: string
 * Return: nothing or exit with code 98.
 */
void read_from_error(int read_from, char *argv)
{
	if (read_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
		exit(98);
	}
}

/**
 * close_error - check for error in closing a file
 * @close_from: the file descriptor
 * Return: nothing or exit with code 100.
 */
void close_error(int close_from)
{
	if (close_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close_from);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	int fd_from, read_from, close_from;
	int fd_to, write_to, close_to;
	mode_t mode;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	from_open_error(fd_from, argv[1]);

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(argv[2], O_WRONLY | O_CREAT  | O_TRUNC, mode);
	to_open_error(fd_to, argv[2]);

	read_from = read(fd_from, buffer, 1024);
	read_from_error(read_from, argv[1]);

	while (read_from)
	{
		write_to = write(fd_to, buffer, read_from);
		if (write_to < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		read_from = read(fd_from, buffer, 1024);
	}

	close_from = close(fd_from);
	close_error(close_from);

	close_to = close(fd_to);
	close_error(close_to);

	return (0);
}
