#include "main.h"
/**
 * append_text_to_file - creates a file
 * @filename: the name of the file
 * @text_content: the content to be appended to the new file
 *
 * Return: 1 for success and -1 for failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, true_write;

	len = strlen(text_content);
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
		true_write = write(fd, text_content, len);
	close(fd);
	if (true_write < 0)
		return (-1);
	return (1);
}
