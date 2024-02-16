#include "main.h"

/**
 * read_textfile - reads a text and prints it to the POSIX standard output
 * @filename: the name of the file
 * @letters: is the number of letters that should be read and printed
 * Return: the number of bytes printed or 0 if error occurs
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, aread = 0, aprint = 0, closed = 0;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	aread = read(fd, buffer, sizeof(char) * letters);
	if (aread < 0)
	{
		free(buffer);
		return (0);
	}
	aprint = write(STDOUT_FILENO, buffer, aread);
	if (aprint < 0)
	{
		free(buffer);
		return (0);
	}
	closed = close(fd);
	if (closed < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (aread);
}
