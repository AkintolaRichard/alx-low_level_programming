#include "main.h"

/**
 * create_file - creates a file and write text to the file
 * @filename: pointer to a char (string) the filename
 * @text_content: pointer to a char (string) text to be added to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, flwrite, flclose;
	ssize_t len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);

	if (text_content == NULL)
		return (1);
	while(text_content[len++] != '\0');
	flwrite = write(fd, text_content, len);
	if (flwrite < 0)
		return (-1);
	flclose = close(fd);
	if (flclose < 0)
		return (-1);
	return (1);
}
