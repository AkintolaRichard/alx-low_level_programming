#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to a char (string) the filename
 * @text_content: pointer to a char (string) text to be added to the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, flwrite, flclose;
	ssize_t len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (text_content[len++] != '\0')
		;
	flwrite = write(fd, text_content, len);
	if (flwrite < 0)
		return (-1);
	flclose = close(fd);
	if (flclose < 0)
		return (-1);
	return (1);
}
